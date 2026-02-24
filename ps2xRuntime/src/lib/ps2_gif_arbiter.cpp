#include "ps2_gif_arbiter.h"
#include <algorithm>
#include <cstdio>
#include <cstring>

namespace
{
const char *pathName(GifPathId id)
{
    switch (id)
    {
    case GifPathId::Path1: return "PATH1";
    case GifPathId::Path2: return "PATH2";
    case GifPathId::Path3: return "PATH3";
    default: return "PATH?";
    }
}
}

GifArbiter::GifArbiter(ProcessPacketFn processFn)
    : m_processFn(std::move(processFn))
{
}

void GifArbiter::submit(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes)
{
    if (!data || sizeBytes < 16 || !m_processFn)
        return;

    static int s_submitCount = 0;
    const bool logIt = (s_submitCount < 100) || ((s_submitCount % 500) == 0);
    if (logIt)
        std::fprintf(stderr, "[GifArbiter] submit %s size=%u bytes queueBefore=%zu\n",
                     pathName(pathId), sizeBytes, m_queue.size());
    ++s_submitCount;

    GifArbiterPacket pkt;
    pkt.pathId = pathId;
    pkt.data.resize(sizeBytes);
    std::memcpy(pkt.data.data(), data, sizeBytes);
    m_queue.push_back(std::move(pkt));
}

void GifArbiter::drain()
{
    if (!m_processFn)
        return;

    static int s_drainCount = 0;
    const bool logIt = (s_drainCount < 50) || ((s_drainCount % 200) == 0);
    if (logIt && !m_queue.empty())
        std::fprintf(stderr, "[GifArbiter] drain queueSize=%zu\n", m_queue.size());
    ++s_drainCount;

    // Sort by priority (lower value = higher priority)
    std::stable_sort(m_queue.begin(), m_queue.end(),
        [](const GifArbiterPacket &a, const GifArbiterPacket &b) {
            return pathPriority(a.pathId) < pathPriority(b.pathId);
        });

    for (size_t i = 0; i < m_queue.size(); ++i)
    {
        auto &pkt = m_queue[i];
        if (!pkt.data.empty())
        {
            if (logIt)
                std::fprintf(stderr, "[GifArbiter] process[%zu] %s size=%zu\n",
                             i, pathName(pkt.pathId), pkt.data.size());
            m_processFn(pkt.data.data(), static_cast<uint32_t>(pkt.data.size()));
        }
    }
    m_queue.clear();
}

uint8_t GifArbiter::pathPriority(GifPathId id)
{
    // PATH1 = 1 (highest), PATH2 = 2, PATH3 = 3 (lowest)
    return static_cast<uint8_t>(id);
}
