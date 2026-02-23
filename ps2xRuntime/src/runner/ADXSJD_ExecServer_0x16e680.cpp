#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_ExecServer
// Address: 0x16e680 - 0x16e6e0
void ADXSJD_ExecServer_0x16e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_ExecServer");


    ctx->pc = 0x16e680u;

    // 0x16e680: 0x27bdffc0
    ctx->pc = 0x16e680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e684: 0x3c020023
    ctx->pc = 0x16e684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16e688: 0xffb00000
    ctx->pc = 0x16e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e68c: 0xffb20020
    ctx->pc = 0x16e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16e690: 0x245056e0
    ctx->pc = 0x16e690u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 22240));
    // 0x16e694: 0xffb10010
    ctx->pc = 0x16e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16e698: 0x24120001
    ctx->pc = 0x16e698u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e69c: 0xffbf0030
    ctx->pc = 0x16e69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16e6a0: 0x261104e0
    ctx->pc = 0x16e6a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1248));
    // 0x16e6a4: 0x82020000
    ctx->pc = 0x16e6a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_16e6a8:
    // 0x16e6a8: 0x54520004
    ctx->pc = 0x16E6A8u;
    {
        const bool branch_taken_0x16e6a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x16e6a8) {
            ctx->pc = 0x16E6ACu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 156));
            ctx->pc = 0x16E6BCu;
            goto label_16e6bc;
        }
    }
    ctx->pc = 0x16E6B0u;
    // 0x16e6b0: 0xc05b994
    ctx->pc = 0x16E6B0u;
    SET_GPR_U32(ctx, 31, 0x16E6B8u);
    ctx->pc = 0x16E6B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_ExecHndl_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6B8u; }
        else if (ctx->pc != 0x16E6B8u) { ctx->pc = 0x16E6B8u; }
    }
    if (ctx->pc != 0x16E6B8u) { return; }
    ctx->pc = 0x16E6B8u;
    // 0x16e6b8: 0x2610009c
    ctx->pc = 0x16e6b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 156));
label_16e6bc:
    // 0x16e6bc: 0x211102a
    ctx->pc = 0x16e6bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x16e6c0: 0x5440fff9
    ctx->pc = 0x16E6C0u;
    {
        const bool branch_taken_0x16e6c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e6c0) {
            ctx->pc = 0x16E6C4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16E6A8u;
            goto label_16e6a8;
        }
    }
    ctx->pc = 0x16E6C8u;
    // 0x16e6c8: 0xdfbf0030
    ctx->pc = 0x16e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e6cc: 0xdfb20020
    ctx->pc = 0x16e6ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e6d0: 0xdfb10010
    ctx->pc = 0x16e6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e6d4: 0xdfb00000
    ctx->pc = 0x16e6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e6d8: 0x3e00008
    ctx->pc = 0x16E6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E6A8u: goto label_16e6a8;
            case 0x16E6BCu: goto label_16e6bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E6E0u;
}
