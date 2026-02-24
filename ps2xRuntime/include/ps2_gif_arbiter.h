#ifndef PS2_GIF_ARBITER_H
#define PS2_GIF_ARBITER_H

#include <cstdint>
#include <functional>
#include <vector>

/// GIF path IDs; higher value = lower priority.
/// Only one path may transfer to the GIF at a time.
/// When a path stops, highest-priority queued path begins (1 > 2 > 3).
enum class GifPathId : uint8_t
{
    Path1 = 1,  // VU1 XGKICK - highest priority
    Path2 = 2,  // VIF1 DIRECT
    Path3 = 3,  // GIF DMA - lowest priority
};

struct GifArbiterPacket
{
    GifPathId pathId;
    std::vector<uint8_t> data;  // Copy of packet data (callers may reuse buffers)
};

/// Central arbiter for GIF data paths. Ensures only one path transfers at a time,
/// processing queued packets in priority order (PATH1 > PATH2 > PATH3).
class GifArbiter
{
public:
    using ProcessPacketFn = std::function<void(const uint8_t *, uint32_t)>;

    GifArbiter() = default;
    explicit GifArbiter(ProcessPacketFn processFn);

    void setProcessPacketFn(ProcessPacketFn fn) { m_processFn = std::move(fn); }

    /// Enqueue a packet from the given path. Data is copied; caller may reuse buffer.
    void submit(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes);

    /// Process all queued packets in priority order, one at a time.
    void drain();

private:
    ProcessPacketFn m_processFn;
    std::vector<GifArbiterPacket> m_queue;

    static uint8_t pathPriority(GifPathId id);
};

#endif // PS2_GIF_ARBITER_H
