import socket
import pyaudio
import numpy as np

# UDP服务器地址和端口
UDP_IP = "192.168.1.4"
UDP_PORT = 1236

# 创建UDP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.bind((UDP_IP, UDP_PORT))

# PyAudio配置
chunk_size = 1024  # 每次读取的音频帧大小
sample_format = pyaudio.paInt16  # 16位PCM格式
channels = 1  # 单声道
fs = 16000  # 采样率

# 初始化PyAudio
p = pyaudio.PyAudio()

# 打开音频输出流
stream = p.open(format=sample_format,
                channels=channels,
                rate=fs,
                output=True)

print("开始播放音频流...")

try:
    while True:
        # 从UDP接收数据
        data, addr = sock.recvfrom(chunk_size)

        # 解析接收的音频数据
        audio_data = np.frombuffer(data, dtype=np.int16)

        # 写入音频数据到音频流中
        stream.write(audio_data.tobytes())

finally:
    # 关闭音频流和PyAudio
    stream.stop_stream()
    stream.close()
    p.terminate()
    print("音频播放已关闭.")
