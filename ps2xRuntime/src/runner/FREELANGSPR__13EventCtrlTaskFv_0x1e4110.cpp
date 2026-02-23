#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREELANGSPR__13EventCtrlTaskFv
// Address: 0x1e4110 - 0x1e4170
void FREELANGSPR__13EventCtrlTaskFv_0x1e4110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREELANGSPR__13EventCtrlTaskFv");


    ctx->pc = 0x1e4110u;

    // 0x1e4110: 0x27bdffe0
    ctx->pc = 0x1e4110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4114: 0x7fbf0010
    ctx->pc = 0x1e4114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4118: 0x7fb00000
    ctx->pc = 0x1e4118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e411c: 0x70808628
    ctx->pc = 0x1e411cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4120: 0x8c84000c
    ctx->pc = 0x1e4120u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4124: 0x3c010050
    ctx->pc = 0x1e4124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e4128: 0x8023fec5
    ctx->pc = 0x1e4128u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1e412c: 0x8c840004
    ctx->pc = 0x1e412cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4130: 0x31840
    ctx->pc = 0x1e4130u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e4134: 0x831821
    ctx->pc = 0x1e4134u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e4138: 0x94630000
    ctx->pc = 0x1e4138u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e413c: 0x10600005
    ctx->pc = 0x1E413Cu;
    {
        const bool branch_taken_0x1e413c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e413c) {
            ctx->pc = 0x1E4154u;
            goto label_1e4154;
        }
    }
    ctx->pc = 0x1E4144u;
    // 0x1e4144: 0x3c020051
    ctx->pc = 0x1e4144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4148: 0x3065ffff
    ctx->pc = 0x1e4148u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 65535));
    // 0x1e414c: 0xc086594
    ctx->pc = 0x1E414Cu;
    SET_GPR_U32(ctx, 31, 0x1E4154u);
    ctx->pc = 0x1E4150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219650u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankSpr__13EntryDatClassFi_0x219650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4154u; }
        else if (ctx->pc != 0x1E4154u) { ctx->pc = 0x1E4154u; }
    }
    if (ctx->pc != 0x1E4154u) { return; }
    ctx->pc = 0x1E4154u;
label_1e4154:
    // 0x1e4154: 0x8e03000c
    ctx->pc = 0x1e4154u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4158: 0x24630008
    ctx->pc = 0x1e4158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e415c: 0xae03000c
    ctx->pc = 0x1e415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4160: 0x7bbf0010
    ctx->pc = 0x1e4160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4164: 0x7bb00000
    ctx->pc = 0x1e4164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4168: 0x3e00008
    ctx->pc = 0x1E4168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E416Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4154u: goto label_1e4154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4170u;
}
