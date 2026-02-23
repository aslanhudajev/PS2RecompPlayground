#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_FLUSHDATA_NOPAUSE__13EventCtrlTaskFv
// Address: 0x1e3ad0 - 0x1e3b18
void WAIT_FLUSHDATA_NOPAUSE__13EventCtrlTaskFv_0x1e3ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_FLUSHDATA_NOPAUSE__13EventCtrlTaskFv");


    ctx->pc = 0x1e3ad0u;

    // 0x1e3ad0: 0x27bdffe0
    ctx->pc = 0x1e3ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3ad4: 0x7fbf0010
    ctx->pc = 0x1e3ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3ad8: 0x7fb00000
    ctx->pc = 0x1e3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3adc: 0x70808628
    ctx->pc = 0x1e3adcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3ae0: 0x3c020051
    ctx->pc = 0x1e3ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3ae4: 0xc086370
    ctx->pc = 0x1E3AE4u;
    SET_GPR_U32(ctx, 31, 0x1E3AECu);
    ctx->pc = 0x1E3AE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AECu; }
        else if (ctx->pc != 0x1E3AECu) { ctx->pc = 0x1E3AECu; }
    }
    if (ctx->pc != 0x1E3AECu) { return; }
    ctx->pc = 0x1E3AECu;
    // 0x1e3aec: 0x10400003
    ctx->pc = 0x1E3AECu;
    {
        const bool branch_taken_0x1e3aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3AF0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e3aec) {
            ctx->pc = 0x1E3AFCu;
            goto label_1e3afc;
        }
    }
    ctx->pc = 0x1E3AF4u;
    // 0x1e3af4: 0x10000004
    ctx->pc = 0x1E3AF4u;
    {
        const bool branch_taken_0x1e3af4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3AF8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e3af4) {
            ctx->pc = 0x1E3B08u;
            goto label_1e3b08;
        }
    }
    ctx->pc = 0x1E3AFCu;
label_1e3afc:
    // 0x1e3afc: 0x8e03000c
    ctx->pc = 0x1e3afcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3b00: 0x24630004
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1e3b04: 0xae03000c
    ctx->pc = 0x1e3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e3b08:
    // 0x1e3b08: 0x7bbf0010
    ctx->pc = 0x1e3b08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3b0c: 0x7bb00000
    ctx->pc = 0x1e3b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3b10: 0x3e00008
    ctx->pc = 0x1E3B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3B14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3AFCu: goto label_1e3afc;
            case 0x1E3B08u: goto label_1e3b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3B18u;
}
