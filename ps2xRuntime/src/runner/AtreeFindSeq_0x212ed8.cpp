#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeFindSeq
// Address: 0x212ed8 - 0x212f68
void AtreeFindSeq_0x212ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212ed8u;

    // 0x212ed8: 0x27bdffa0
    ctx->pc = 0x212ed8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x212edc: 0xffbf0050
    ctx->pc = 0x212edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x212ee0: 0xffb40040
    ctx->pc = 0x212ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x212ee4: 0xffb30030
    ctx->pc = 0x212ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212ee8: 0xffb20020
    ctx->pc = 0x212ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212eec: 0xffb10010
    ctx->pc = 0x212eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212ef0: 0xffb00000
    ctx->pc = 0x212ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212ef4: 0xa0982d
    ctx->pc = 0x212ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ef8: 0x24910004
    ctx->pc = 0x212ef8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4));
    // 0x212efc: 0x8c920004
    ctx->pc = 0x212efcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x212f00: 0x8622000c
    ctx->pc = 0x212f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x212f04: 0x1840000f
    ctx->pc = 0x212F04u;
    {
        const bool branch_taken_0x212f04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x212F08u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212f04) {
            ctx->pc = 0x212F44u;
            goto label_212f44;
        }
    }
    ctx->pc = 0x212F0Cu;
    // 0x212f0c: 0x24140030
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
    // 0x212f10: 0x2141018
    ctx->pc = 0x212f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212f14: 0x0
    ctx->pc = 0x212f14u;
    // NOP
label_212f18:
    // 0x212f18: 0x522021
    ctx->pc = 0x212f18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x212f1c: 0xc0bf270
    ctx->pc = 0x212F1Cu;
    SET_GPR_U32(ctx, 31, 0x212F24u);
    ctx->pc = 0x212F20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212F24u; }
    }
    if (ctx->pc != 0x212F24u) { return; }
    ctx->pc = 0x212F24u;
    // 0x212f24: 0x54400003
    ctx->pc = 0x212F24u;
    {
        const bool branch_taken_0x212f24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212f24) {
            ctx->pc = 0x212F28u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x212F34u;
            goto label_212f34;
        }
    }
    ctx->pc = 0x212F2Cu;
    // 0x212f2c: 0x10000006
    ctx->pc = 0x212F2Cu;
    {
        const bool branch_taken_0x212f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212F30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212f2c) {
            ctx->pc = 0x212F48u;
            goto label_212f48;
        }
    }
    ctx->pc = 0x212F34u;
label_212f34:
    // 0x212f34: 0x8622000c
    ctx->pc = 0x212f34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x212f38: 0x202102a
    ctx->pc = 0x212f38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x212f3c: 0x1440fff6
    ctx->pc = 0x212F3Cu;
    {
        const bool branch_taken_0x212f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212F40u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x212f3c) {
            ctx->pc = 0x212F18u;
            goto label_212f18;
        }
    }
    ctx->pc = 0x212F44u;
label_212f44:
    // 0x212f44: 0x2402ffff
    ctx->pc = 0x212f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_212f48:
    // 0x212f48: 0xdfbf0050
    ctx->pc = 0x212f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212f4c: 0xdfb40040
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212f50: 0xdfb30030
    ctx->pc = 0x212f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212f54: 0xdfb20020
    ctx->pc = 0x212f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212f58: 0xdfb10010
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f5c: 0xdfb00000
    ctx->pc = 0x212f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f60: 0x3e00008
    ctx->pc = 0x212F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212F18u: goto label_212f18;
            case 0x212F34u: goto label_212f34;
            case 0x212F44u: goto label_212f44;
            case 0x212F48u: goto label_212f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212F68u;
}
