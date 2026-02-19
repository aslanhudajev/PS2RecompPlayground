#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitPlayerControls
// Address: 0x205c00 - 0x205d1c
void InitPlayerControls_0x205c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205c00u;

    // 0x205c00: 0x27bdff70
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x205c04: 0xffbf0080
    ctx->pc = 0x205c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x205c08: 0xffb70070
    ctx->pc = 0x205c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x205c0c: 0xffb60060
    ctx->pc = 0x205c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x205c10: 0xffb50050
    ctx->pc = 0x205c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x205c14: 0xffb40040
    ctx->pc = 0x205c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205c18: 0xffb30030
    ctx->pc = 0x205c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205c1c: 0xffb20020
    ctx->pc = 0x205c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x205c20: 0xffb10010
    ctx->pc = 0x205c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205c24: 0xffb00000
    ctx->pc = 0x205c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205c28: 0x3c020031
    ctx->pc = 0x205c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205c2c: 0xac401b04
    ctx->pc = 0x205c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6916), GPR_U32(ctx, 0));
    // 0x205c30: 0x802d
    ctx->pc = 0x205c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c34: 0x3c02003c
    ctx->pc = 0x205c34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205c38: 0x2454b460
    ctx->pc = 0x205c38u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x205c3c: 0x24170030
    ctx->pc = 0x205c3cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 48));
    // 0x205c40: 0x3c02003c
    ctx->pc = 0x205c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x205c44: 0x2453b3a0
    ctx->pc = 0x205c44u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x205c48: 0x3c020031
    ctx->pc = 0x205c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205c4c: 0x24561c90
    ctx->pc = 0x205c4cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7312));
    // 0x205c50: 0x3c020031
    ctx->pc = 0x205c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205c54: 0x24511b90
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x205c58: 0x24120001
    ctx->pc = 0x205c58u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x205c5c: 0x3c020031
    ctx->pc = 0x205c5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205c60: 0x24551bc8
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7112));
    // 0x205c64: 0x0
    ctx->pc = 0x205c64u;
    // NOP
label_205c68:
    // 0x205c68: 0xc0811f8
    ctx->pc = 0x205C68u;
    SET_GPR_U32(ctx, 31, 0x205C70u);
    ctx->pc = 0x205C6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2047E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitSpecialMoves_0x2047e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C70u; }
    }
    if (ctx->pc != 0x205C70u) { return; }
    ctx->pc = 0x205C70u;
    // 0x205c70: 0x200202d
    ctx->pc = 0x205c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c74: 0xc0816b8
    ctx->pc = 0x205C74u;
    SET_GPR_U32(ctx, 31, 0x205C7Cu);
    ctx->pc = 0x205C78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerControl_0x205ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205C7Cu; }
    }
    if (ctx->pc != 0x205C7Cu) { return; }
    ctx->pc = 0x205C7Cu;
    // 0x205c7c: 0x202d
    ctx->pc = 0x205c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205c80: 0x2172818
    ctx->pc = 0x205c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205c84: 0x0
    ctx->pc = 0x205c84u;
    // NOP
label_205c88:
    // 0x205c88: 0x41080
    ctx->pc = 0x205c88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x205c8c: 0x451021
    ctx->pc = 0x205c8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x205c90: 0x541821
    ctx->pc = 0x205c90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x205c94: 0x531021
    ctx->pc = 0x205c94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x205c98: 0xac400000
    ctx->pc = 0x205c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205c9c: 0x24840001
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x205ca0: 0x2882000c
    ctx->pc = 0x205ca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 12));
    // 0x205ca4: 0x1440fff8
    ctx->pc = 0x205CA4u;
    {
        const bool branch_taken_0x205ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x205ca4) {
            ctx->pc = 0x205C88u;
            goto label_205c88;
        }
    }
    ctx->pc = 0x205CACu;
    // 0x205cac: 0x101080
    ctx->pc = 0x205cacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205cb0: 0x561021
    ctx->pc = 0x205cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x205cb4: 0xac400000
    ctx->pc = 0x205cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205cb8: 0x2403003c
    ctx->pc = 0x205cb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x205cbc: 0x2031818
    ctx->pc = 0x205cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x205cc0: 0x2231021
    ctx->pc = 0x205cc0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x205cc4: 0xac40002c
    ctx->pc = 0x205cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x205cc8: 0x40202d
    ctx->pc = 0x205cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ccc: 0x24020002
    ctx->pc = 0x205cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x205cd0: 0xac820030
    ctx->pc = 0x205cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x205cd4: 0x80102d
    ctx->pc = 0x205cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205cd8: 0xac520034
    ctx->pc = 0x205cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
    // 0x205cdc: 0x751821
    ctx->pc = 0x205cdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x205ce0: 0x26100001
    ctx->pc = 0x205ce0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x205ce4: 0x2a020004
    ctx->pc = 0x205ce4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x205ce8: 0x1440ffdf
    ctx->pc = 0x205CE8u;
    {
        const bool branch_taken_0x205ce8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205CECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x205ce8) {
            ctx->pc = 0x205C68u;
            goto label_205c68;
        }
    }
    ctx->pc = 0x205CF0u;
    // 0x205cf0: 0xdfbf0080
    ctx->pc = 0x205cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x205cf4: 0xdfb70070
    ctx->pc = 0x205cf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x205cf8: 0xdfb60060
    ctx->pc = 0x205cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205cfc: 0xdfb50050
    ctx->pc = 0x205cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205d00: 0xdfb40040
    ctx->pc = 0x205d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205d04: 0xdfb30030
    ctx->pc = 0x205d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205d08: 0xdfb20020
    ctx->pc = 0x205d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205d0c: 0xdfb10010
    ctx->pc = 0x205d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205d10: 0xdfb00000
    ctx->pc = 0x205d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205d14: 0x8081500
    ctx->pc = 0x205D14u;
    ctx->pc = 0x205D18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x205400u;
    InitJoyAng_0x205400(rdram, ctx, runtime); return;
    ctx->pc = 0x205D1Cu;
}
