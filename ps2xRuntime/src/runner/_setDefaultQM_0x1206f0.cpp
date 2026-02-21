#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _setDefaultQM
// Address: 0x1206f0 - 0x1207b0
void _setDefaultQM_0x1206f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1206f0u;

    // 0x1206f0: 0x27bdffa0
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1206f4: 0x24020002
    ctx->pc = 0x1206f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1206f8: 0xffb20040
    ctx->pc = 0x1206f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1206fc: 0xffb10030
    ctx->pc = 0x1206fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x120700: 0x80902d
    ctx->pc = 0x120700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120704: 0x3c110017
    ctx->pc = 0x120704u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x120708: 0xffb00020
    ctx->pc = 0x120708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12070c: 0xa0802d
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120710: 0x8e2417bc
    ctx->pc = 0x120710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120714: 0xafa20000
    ctx->pc = 0x120714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120718: 0xffbf0050
    ctx->pc = 0x120718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12071c: 0xc047de0
    ctx->pc = 0x12071Cu;
    SET_GPR_U32(ctx, 31, 0x120724u);
    ctx->pc = 0x120720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120724u; }
    }
    if (ctx->pc != 0x120724u) { return; }
    ctx->pc = 0x120724u;
    // 0x120724: 0xc048e84
    ctx->pc = 0x120724u;
    SET_GPR_U32(ctx, 31, 0x12072Cu);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12072Cu; }
    }
    if (ctx->pc != 0x12072Cu) { return; }
    ctx->pc = 0x12072Cu;
    // 0x12072c: 0x3c021000
    ctx->pc = 0x12072cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x120730: 0x34422000
    ctx->pc = 0x120730u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x120734: 0xc048e84
    ctx->pc = 0x120734u;
    SET_GPR_U32(ctx, 31, 0x12073Cu);
    ctx->pc = 0x120738u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12073Cu; }
    }
    if (ctx->pc != 0x12073Cu) { return; }
    ctx->pc = 0x12073Cu;
    // 0x12073c: 0x3c020fff
    ctx->pc = 0x12073cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x120740: 0x3c031000
    ctx->pc = 0x120740u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x120744: 0x3442ffff
    ctx->pc = 0x120744u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x120748: 0x3463b410
    ctx->pc = 0x120748u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x12074c: 0x2028024
    ctx->pc = 0x12074cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x120750: 0x3c041000
    ctx->pc = 0x120750u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x120754: 0xac700000
    ctx->pc = 0x120754u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x120758: 0x3484b420
    ctx->pc = 0x120758u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x12075c: 0x24030004
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x120760: 0x3c021000
    ctx->pc = 0x120760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x120764: 0xac830000
    ctx->pc = 0x120764u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x120768: 0x3442b400
    ctx->pc = 0x120768u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x12076c: 0x24030101
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x120770: 0x240202d
    ctx->pc = 0x120770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120774: 0xc048e78
    ctx->pc = 0x120774u;
    SET_GPR_U32(ctx, 31, 0x12077Cu);
    ctx->pc = 0x120778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1239E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1239e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12077Cu; }
    }
    if (ctx->pc != 0x12077Cu) { return; }
    ctx->pc = 0x12077Cu;
    // 0x12077c: 0xc048e84
    ctx->pc = 0x12077Cu;
    SET_GPR_U32(ctx, 31, 0x120784u);
    ctx->pc = 0x123A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x123a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120784u; }
    }
    if (ctx->pc != 0x120784u) { return; }
    ctx->pc = 0x120784u;
    // 0x120784: 0x8e2417bc
    ctx->pc = 0x120784u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x120788: 0x24020003
    ctx->pc = 0x120788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x12078c: 0xafa20000
    ctx->pc = 0x12078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x120790: 0xc047de0
    ctx->pc = 0x120790u;
    SET_GPR_U32(ctx, 31, 0x120798u);
    ctx->pc = 0x120794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120798u; }
    }
    if (ctx->pc != 0x120798u) { return; }
    ctx->pc = 0x120798u;
    // 0x120798: 0xdfbf0050
    ctx->pc = 0x120798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12079c: 0xdfb20040
    ctx->pc = 0x12079cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1207a0: 0xdfb10030
    ctx->pc = 0x1207a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1207a4: 0xdfb00020
    ctx->pc = 0x1207a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1207a8: 0x3e00008
    ctx->pc = 0x1207A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1207ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1207B0u;
}
