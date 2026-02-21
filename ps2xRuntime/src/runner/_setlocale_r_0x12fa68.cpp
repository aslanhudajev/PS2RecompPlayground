#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _setlocale_r
// Address: 0x12fa68 - 0x12faec
void _setlocale_r_0x12fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fa68u;

    // 0x12fa68: 0x27bdffb0
    ctx->pc = 0x12fa68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12fa6c: 0xffb20020
    ctx->pc = 0x12fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12fa70: 0xffb10010
    ctx->pc = 0x12fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12fa74: 0xa0902d
    ctx->pc = 0x12fa74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa78: 0xffb00000
    ctx->pc = 0x12fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fa7c: 0x80882d
    ctx->pc = 0x12fa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa80: 0xffbf0040
    ctx->pc = 0x12fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12fa84: 0xc0802d
    ctx->pc = 0x12fa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa88: 0x1200000f
    ctx->pc = 0x12FA88u;
    {
        const bool branch_taken_0x12fa88 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FA8Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        if (branch_taken_0x12fa88) {
            ctx->pc = 0x12FAC8u;
            goto label_12fac8;
        }
    }
    ctx->pc = 0x12FA90u;
    // 0x12fa90: 0x3c130017
    ctx->pc = 0x12fa90u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x12fa94: 0x200202d
    ctx->pc = 0x12fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa98: 0xc04ae16
    ctx->pc = 0x12FA98u;
    SET_GPR_U32(ctx, 31, 0x12FAA0u);
    ctx->pc = 0x12FA9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 22920));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAA0u; }
    }
    if (ctx->pc != 0x12FAA0u) { return; }
    ctx->pc = 0x12FAA0u;
    // 0x12faa0: 0x10400006
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FAA4u;
        SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12FABCu;
            goto label_12fabc;
        }
    }
    ctx->pc = 0x12FAA8u;
    // 0x12faa8: 0x200202d
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faac: 0xc04ae16
    ctx->pc = 0x12FAACu;
    SET_GPR_U32(ctx, 31, 0x12FAB4u);
    ctx->pc = 0x12FAB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22904));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAB4u; }
    }
    if (ctx->pc != 0x12FAB4u) { return; }
    ctx->pc = 0x12FAB4u;
    // 0x12fab4: 0x14400006
    ctx->pc = 0x12FAB4u;
    {
        const bool branch_taken_0x12fab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12FAB8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12fab4) {
            ctx->pc = 0x12FAD0u;
            goto label_12fad0;
        }
    }
    ctx->pc = 0x12FABCu;
label_12fabc:
    // 0x12fabc: 0xae300034
    ctx->pc = 0x12fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x12fac0: 0x10000002
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12FAC4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FACCu;
            goto label_12facc;
        }
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x3c130017
    ctx->pc = 0x12fac8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
label_12facc:
    // 0x12facc: 0x26625988
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 22920));
label_12fad0:
    // 0x12fad0: 0xdfbf0040
    ctx->pc = 0x12fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fad4: 0xdfb30030
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fad8: 0xdfb20020
    ctx->pc = 0x12fad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fadc: 0xdfb10010
    ctx->pc = 0x12fadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fae0: 0xdfb00000
    ctx->pc = 0x12fae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fae4: 0x3e00008
    ctx->pc = 0x12FAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FAECu;
}
