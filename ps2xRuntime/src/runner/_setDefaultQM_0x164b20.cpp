#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _setDefaultQM
// Address: 0x164b20 - 0x164be0
void _setDefaultQM_0x164b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_setDefaultQM");


    ctx->pc = 0x164b20u;

    // 0x164b20: 0x27bdffa0
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x164b24: 0x24020002
    ctx->pc = 0x164b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x164b28: 0xffb20040
    ctx->pc = 0x164b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x164b2c: 0xffb10030
    ctx->pc = 0x164b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x164b30: 0x80902d
    ctx->pc = 0x164b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b34: 0x3c110023
    ctx->pc = 0x164b34u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x164b38: 0xffb00020
    ctx->pc = 0x164b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x164b3c: 0xa0802d
    ctx->pc = 0x164b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164b40: 0x8e24a21c
    ctx->pc = 0x164b40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x164b44: 0xafa20000
    ctx->pc = 0x164b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x164b48: 0xffbf0050
    ctx->pc = 0x164b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x164b4c: 0xc058eec
    ctx->pc = 0x164B4Cu;
    SET_GPR_U32(ctx, 31, 0x164B54u);
    ctx->pc = 0x164B50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B54u; }
        else if (ctx->pc != 0x164B54u) { ctx->pc = 0x164B54u; }
    }
    if (ctx->pc != 0x164B54u) { return; }
    ctx->pc = 0x164B54u;
    // 0x164b54: 0xc05847c
    ctx->pc = 0x164B54u;
    SET_GPR_U32(ctx, 31, 0x164B5Cu);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B5Cu; }
        else if (ctx->pc != 0x164B5Cu) { ctx->pc = 0x164B5Cu; }
    }
    if (ctx->pc != 0x164B5Cu) { return; }
    ctx->pc = 0x164B5Cu;
    // 0x164b5c: 0x3c021000
    ctx->pc = 0x164b5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x164b60: 0x34422000
    ctx->pc = 0x164b60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x164b64: 0xc05847c
    ctx->pc = 0x164B64u;
    SET_GPR_U32(ctx, 31, 0x164B6Cu);
    ctx->pc = 0x164B68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164B6Cu; }
        else if (ctx->pc != 0x164B6Cu) { ctx->pc = 0x164B6Cu; }
    }
    if (ctx->pc != 0x164B6Cu) { return; }
    ctx->pc = 0x164B6Cu;
    // 0x164b6c: 0x3c020fff
    ctx->pc = 0x164b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x164b70: 0x3c031000
    ctx->pc = 0x164b70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x164b74: 0x3442ffff
    ctx->pc = 0x164b74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x164b78: 0x3463b410
    ctx->pc = 0x164b78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46096));
    // 0x164b7c: 0x2028024
    ctx->pc = 0x164b7cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x164b80: 0x3c041000
    ctx->pc = 0x164b80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x164b84: 0xac700000
    ctx->pc = 0x164b84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x164b88: 0x3484b420
    ctx->pc = 0x164b88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x164b8c: 0x24030004
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x164b90: 0x3c021000
    ctx->pc = 0x164b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x164b94: 0xac830000
    ctx->pc = 0x164b94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x164b98: 0x3442b400
    ctx->pc = 0x164b98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x164b9c: 0x24030101
    ctx->pc = 0x164b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x164ba0: 0x240202d
    ctx->pc = 0x164ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ba4: 0xc058470
    ctx->pc = 0x164BA4u;
    SET_GPR_U32(ctx, 31, 0x164BACu);
    ctx->pc = 0x164BA8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BACu; }
        else if (ctx->pc != 0x164BACu) { ctx->pc = 0x164BACu; }
    }
    if (ctx->pc != 0x164BACu) { return; }
    ctx->pc = 0x164BACu;
    // 0x164bac: 0xc05847c
    ctx->pc = 0x164BACu;
    SET_GPR_U32(ctx, 31, 0x164BB4u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BB4u; }
        else if (ctx->pc != 0x164BB4u) { ctx->pc = 0x164BB4u; }
    }
    if (ctx->pc != 0x164BB4u) { return; }
    ctx->pc = 0x164BB4u;
    // 0x164bb4: 0x8e24a21c
    ctx->pc = 0x164bb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x164bb8: 0x24020003
    ctx->pc = 0x164bb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x164bbc: 0xafa20000
    ctx->pc = 0x164bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x164bc0: 0xc058eec
    ctx->pc = 0x164BC0u;
    SET_GPR_U32(ctx, 31, 0x164BC8u);
    ctx->pc = 0x164BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BC8u; }
        else if (ctx->pc != 0x164BC8u) { ctx->pc = 0x164BC8u; }
    }
    if (ctx->pc != 0x164BC8u) { return; }
    ctx->pc = 0x164BC8u;
    // 0x164bc8: 0xdfbf0050
    ctx->pc = 0x164bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164bcc: 0xdfb20040
    ctx->pc = 0x164bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164bd0: 0xdfb10030
    ctx->pc = 0x164bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164bd4: 0xdfb00020
    ctx->pc = 0x164bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164bd8: 0x3e00008
    ctx->pc = 0x164BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164BDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164BE0u;
}
