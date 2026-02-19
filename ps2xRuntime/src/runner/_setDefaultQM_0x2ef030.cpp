#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _setDefaultQM
// Address: 0x2ef030 - 0x2ef0f0
void _setDefaultQM_0x2ef030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef030u;

    // 0x2ef030: 0x27bdffa0
    ctx->pc = 0x2ef030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ef034: 0x24020002
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef038: 0xffb20040
    ctx->pc = 0x2ef038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2ef03c: 0xffb10030
    ctx->pc = 0x2ef03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2ef040: 0x80902d
    ctx->pc = 0x2ef040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef044: 0x3c11003a
    ctx->pc = 0x2ef044u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2ef048: 0xffb00020
    ctx->pc = 0x2ef048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ef04c: 0xa0802d
    ctx->pc = 0x2ef04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef050: 0x8e243024
    ctx->pc = 0x2ef050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12324)));
    // 0x2ef054: 0xafa20000
    ctx->pc = 0x2ef054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef058: 0xffbf0050
    ctx->pc = 0x2ef058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ef05c: 0xc0bb834
    ctx->pc = 0x2EF05Cu;
    SET_GPR_U32(ctx, 31, 0x2EF064u);
    ctx->pc = 0x2EF060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF064u; }
    }
    if (ctx->pc != 0x2EF064u) { return; }
    ctx->pc = 0x2EF064u;
    // 0x2ef064: 0xc0bc8da
    ctx->pc = 0x2EF064u;
    SET_GPR_U32(ctx, 31, 0x2EF06Cu);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF06Cu; }
    }
    if (ctx->pc != 0x2EF06Cu) { return; }
    ctx->pc = 0x2EF06Cu;
    // 0x2ef06c: 0x3c021000
    ctx->pc = 0x2ef06cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ef070: 0x34422000
    ctx->pc = 0x2ef070u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x2ef074: 0xc0bc8da
    ctx->pc = 0x2EF074u;
    SET_GPR_U32(ctx, 31, 0x2EF07Cu);
    ctx->pc = 0x2EF078u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF07Cu; }
    }
    if (ctx->pc != 0x2EF07Cu) { return; }
    ctx->pc = 0x2EF07Cu;
    // 0x2ef07c: 0x3c020fff
    ctx->pc = 0x2ef07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2ef080: 0x3c031000
    ctx->pc = 0x2ef080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ef084: 0x3442ffff
    ctx->pc = 0x2ef084u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ef088: 0x3463b410
    ctx->pc = 0x2ef088u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x2ef08c: 0x2028024
    ctx->pc = 0x2ef08cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ef090: 0x3c041000
    ctx->pc = 0x2ef090u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2ef094: 0xac700000
    ctx->pc = 0x2ef094u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x2ef098: 0x3484b420
    ctx->pc = 0x2ef098u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x2ef09c: 0x24030004
    ctx->pc = 0x2ef09cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ef0a0: 0x3c021000
    ctx->pc = 0x2ef0a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ef0a4: 0xac830000
    ctx->pc = 0x2ef0a4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2ef0a8: 0x3442b400
    ctx->pc = 0x2ef0a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2ef0ac: 0x24030101
    ctx->pc = 0x2ef0acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x2ef0b0: 0x240202d
    ctx->pc = 0x2ef0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0b4: 0xc0bc8ce
    ctx->pc = 0x2EF0B4u;
    SET_GPR_U32(ctx, 31, 0x2EF0BCu);
    ctx->pc = 0x2EF0B8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0BCu; }
    }
    if (ctx->pc != 0x2EF0BCu) { return; }
    ctx->pc = 0x2EF0BCu;
    // 0x2ef0bc: 0xc0bc8da
    ctx->pc = 0x2EF0BCu;
    SET_GPR_U32(ctx, 31, 0x2EF0C4u);
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0C4u; }
    }
    if (ctx->pc != 0x2EF0C4u) { return; }
    ctx->pc = 0x2EF0C4u;
    // 0x2ef0c4: 0x8e243024
    ctx->pc = 0x2ef0c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12324)));
    // 0x2ef0c8: 0x24020003
    ctx->pc = 0x2ef0c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef0cc: 0xafa20000
    ctx->pc = 0x2ef0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ef0d0: 0xc0bb834
    ctx->pc = 0x2EF0D0u;
    SET_GPR_U32(ctx, 31, 0x2EF0D8u);
    ctx->pc = 0x2EF0D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF0D8u; }
    }
    if (ctx->pc != 0x2EF0D8u) { return; }
    ctx->pc = 0x2EF0D8u;
    // 0x2ef0d8: 0xdfbf0050
    ctx->pc = 0x2ef0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef0dc: 0xdfb20040
    ctx->pc = 0x2ef0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef0e0: 0xdfb10030
    ctx->pc = 0x2ef0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef0e4: 0xdfb00020
    ctx->pc = 0x2ef0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef0e8: 0x3e00008
    ctx->pc = 0x2EF0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF0ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EF0F0u;
}
