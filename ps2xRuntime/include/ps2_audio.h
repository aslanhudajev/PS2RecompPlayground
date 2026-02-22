#ifndef PS2_AUDIO_H
#define PS2_AUDIO_H

#include <cstdint>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

// PS2 Audio Backend - protocol-agnostic layer that consumes audio data
// from SIF transfers/RPC and outputs to host audio.
class PS2AudioBackend
{
public:
    PS2AudioBackend();
    ~PS2AudioBackend();

    // Called when VAG data is detected in an EE->IOP SIF DMA transfer.
    // Decodes and stores in sample bank keyed by srcAddr.
    void onVagTransfer(const uint8_t* rdram, uint32_t srcAddr, uint32_t sizeBytes);

    // Called with accumulated VAG stream from fioClose (full file read via fioRead).
    // Decodes and stores in sample bank keyed by keyAddr (first bufAddr seen for that fd).
    void onVagTransferFromBuffer(const uint8_t* data, uint32_t sizeBytes, uint32_t keyAddr);

    // Called from unified sound RPC handler (libsd, DCS, etc.).
    // sendBuf/recvBuf are in RDRAM; sizes in bytes.
    void onSoundCommand(uint32_t sid, uint32_t rpcNum,
                        const uint8_t* sendBuf, uint32_t sendSize,
                        uint8_t* recvBuf, uint32_t recvSize);

    // Play a sample by guest address (must have been loaded via onVagTransfer).
    // voiceIndex 0..N maps to Nth loaded VAG when sampleAddr not in bank.
    void play(uint32_t sampleAddr, float pitch = 1.0f, float volume = 1.0f,
              uint32_t voiceIndex = 0xFFFFFFFFu);

    // Stop a specific voice or all voices.
    void stop(uint32_t voiceId);
    void stopAll();

    // Set host audio device ready (call after InitAudioDevice).
    void setAudioReady(bool ready) { m_audioReady = ready; }

private:
    struct DecodedSample
    {
        std::vector<int16_t> pcm;
        uint32_t sampleRate = 44100;
    };

    uint32_t m_mostRecentSampleKey = 0;  // fallback when exact addr not found
    std::vector<DecodedSample> m_loadOrderSamples;  // VAGs by load order (for voice index mapping)

    struct Impl;
    std::unique_ptr<Impl> m_impl;
    bool m_audioReady = false;
    std::unordered_map<uint32_t, DecodedSample> m_sampleBank;
    std::mutex m_mutex;

    void playDecodedSample(uint32_t sampleKey, DecodedSample& sample, float pitch, float volume,
                          bool isBgm = false);
    void pruneFinishedSounds();
};

#endif // PS2_AUDIO_H
