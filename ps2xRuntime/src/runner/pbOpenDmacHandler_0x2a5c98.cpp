#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbOpenDmacHandler
// Address: 0x2a5c98 - 0x2a5d90
void pbOpenDmacHandler_0x2a5c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5c98u;

    // 0x2a5c98: 0x27bdffd0
    ctx->pc = 0x2a5c98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5c9c: 0xffbf0020
    ctx->pc = 0x2a5c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5ca0: 0xffbe0010
    ctx->pc = 0x2a5ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a5ca4: 0xffb00000
    ctx->pc = 0x2a5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5ca8: 0x3a0f02d
    ctx->pc = 0x2a5ca8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cac: 0x3c100036
    ctx->pc = 0x2a5cacu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a5cb0: 0x8e10dee0
    ctx->pc = 0x2a5cb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a5cb4: 0x8e020020
    ctx->pc = 0x2a5cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5cb8: 0x1040002e
    ctx->pc = 0x2A5CB8u;
    {
        const bool branch_taken_0x2a5cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a5cb8) {
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5CC0u;
    // 0x2a5cc0: 0x8e020020
    ctx->pc = 0x2a5cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5cc4: 0x8c4300b8
    ctx->pc = 0x2a5cc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2a5cc8: 0x461000c
    ctx->pc = 0x2A5CC8u;
    {
        const bool branch_taken_0x2a5cc8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2a5cc8) {
            ctx->pc = 0x2A5CFCu;
            goto label_2a5cfc;
        }
    }
    ctx->pc = 0x2A5CD0u;
    // 0x2a5cd0: 0x202d
    ctx->pc = 0x2a5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cd4: 0x3c05002b
    ctx->pc = 0x2a5cd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x2a5cd8: 0x24a5b358
    ctx->pc = 0x2a5cd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947672));
    // 0x2a5cdc: 0x302d
    ctx->pc = 0x2a5cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce0: 0xc0c0cbc
    ctx->pc = 0x2A5CE0u;
    SET_GPR_U32(ctx, 31, 0x2A5CE8u);
    ctx->pc = 0x3032F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x3032f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CE8u; }
    }
    if (ctx->pc != 0x2A5CE8u) { return; }
    ctx->pc = 0x2A5CE8u;
    // 0x2a5ce8: 0x8e030020
    ctx->pc = 0x2a5ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5cec: 0xac6200b8
    ctx->pc = 0x2a5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 2));
    // 0x2a5cf0: 0x202d
    ctx->pc = 0x2a5cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cf4: 0xc0c1062
    ctx->pc = 0x2A5CF4u;
    SET_GPR_U32(ctx, 31, 0x2A5CFCu);
    ctx->pc = 0x304188u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x304188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5CFCu; }
    }
    if (ctx->pc != 0x2A5CFCu) { return; }
    ctx->pc = 0x2A5CFCu;
label_2a5cfc:
    // 0x2a5cfc: 0x8e020020
    ctx->pc = 0x2a5cfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5d00: 0x8c4300bc
    ctx->pc = 0x2a5d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2a5d04: 0x461000c
    ctx->pc = 0x2A5D04u;
    {
        const bool branch_taken_0x2a5d04 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2a5d04) {
            ctx->pc = 0x2A5D38u;
            goto label_2a5d38;
        }
    }
    ctx->pc = 0x2A5D0Cu;
    // 0x2a5d0c: 0x24040001
    ctx->pc = 0x2a5d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5d10: 0x3c05002b
    ctx->pc = 0x2a5d10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x2a5d14: 0x24a5b358
    ctx->pc = 0x2a5d14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947672));
    // 0x2a5d18: 0x302d
    ctx->pc = 0x2a5d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d1c: 0xc0c0cbc
    ctx->pc = 0x2A5D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D24u);
    ctx->pc = 0x3032F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x3032f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D24u; }
    }
    if (ctx->pc != 0x2A5D24u) { return; }
    ctx->pc = 0x2A5D24u;
    // 0x2a5d24: 0x8e030020
    ctx->pc = 0x2a5d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5d28: 0xac6200bc
    ctx->pc = 0x2a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 2));
    // 0x2a5d2c: 0x24040001
    ctx->pc = 0x2a5d2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5d30: 0xc0c1062
    ctx->pc = 0x2A5D30u;
    SET_GPR_U32(ctx, 31, 0x2A5D38u);
    ctx->pc = 0x304188u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x304188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D38u; }
    }
    if (ctx->pc != 0x2A5D38u) { return; }
    ctx->pc = 0x2A5D38u;
label_2a5d38:
    // 0x2a5d38: 0x8e020020
    ctx->pc = 0x2a5d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5d3c: 0x8c4300c0
    ctx->pc = 0x2a5d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2a5d40: 0x461000c
    ctx->pc = 0x2A5D40u;
    {
        const bool branch_taken_0x2a5d40 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2a5d40) {
            ctx->pc = 0x2A5D74u;
            goto label_2a5d74;
        }
    }
    ctx->pc = 0x2A5D48u;
    // 0x2a5d48: 0x24040002
    ctx->pc = 0x2a5d48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5d4c: 0x3c05002b
    ctx->pc = 0x2a5d4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)43 << 16));
    // 0x2a5d50: 0x24a5b358
    ctx->pc = 0x2a5d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947672));
    // 0x2a5d54: 0x302d
    ctx->pc = 0x2a5d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d58: 0xc0c0cbc
    ctx->pc = 0x2A5D58u;
    SET_GPR_U32(ctx, 31, 0x2A5D60u);
    ctx->pc = 0x3032F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler_0x3032f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D60u; }
    }
    if (ctx->pc != 0x2A5D60u) { return; }
    ctx->pc = 0x2A5D60u;
    // 0x2a5d60: 0x8e030020
    ctx->pc = 0x2a5d60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a5d64: 0xac6200c0
    ctx->pc = 0x2a5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x2a5d68: 0x24040002
    ctx->pc = 0x2a5d68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5d6c: 0xc0c1062
    ctx->pc = 0x2A5D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A5D74u);
    ctx->pc = 0x304188u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x304188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5D74u; }
    }
    if (ctx->pc != 0x2A5D74u) { return; }
    ctx->pc = 0x2A5D74u;
label_2a5d74:
    // 0x2a5d74: 0x3c0e82d
    ctx->pc = 0x2a5d74u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d78: 0xdfbf0020
    ctx->pc = 0x2a5d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5d7c: 0xdfbe0010
    ctx->pc = 0x2a5d7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5d80: 0xdfb00000
    ctx->pc = 0x2a5d80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5d84: 0x27bd0030
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5d88: 0x3e00008
    ctx->pc = 0x2A5D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5CFCu: goto label_2a5cfc;
            case 0x2A5D38u: goto label_2a5d38;
            case 0x2A5D74u: goto label_2a5d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5D90u;
}
