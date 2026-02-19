#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableIntc
// Address: 0x304050 - 0x3040b4
void DisableIntc_0x304050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304050u;

    // 0x304050: 0x27bdffe0
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304054: 0xffbf0010
    ctx->pc = 0x304054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304058: 0xffb00000
    ctx->pc = 0x304058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30405c: 0x40106000
    ctx->pc = 0x30405cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x304060: 0x3c020001
    ctx->pc = 0x304060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x304064: 0x2028024
    ctx->pc = 0x304064u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x304068: 0x12000008
    ctx->pc = 0x304068u;
    {
        const bool branch_taken_0x304068 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30406Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x304068) {
            ctx->pc = 0x30408Cu;
            goto label_30408c;
        }
    }
    ctx->pc = 0x304070u;
label_304070:
    // 0x304070: 0x42000039
    ctx->pc = 0x304070u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x304074: 0x40f
    ctx->pc = 0x304074u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304078: 0x40026000
    ctx->pc = 0x304078u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x30407c: 0x431024
    ctx->pc = 0x30407cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304080: 0x0
    ctx->pc = 0x304080u;
    // NOP
    // 0x304084: 0x1440fffa
    ctx->pc = 0x304084u;
    {
        const bool branch_taken_0x304084 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x304084) {
            ctx->pc = 0x304070u;
            goto label_304070;
        }
    }
    ctx->pc = 0x30408Cu;
label_30408c:
    // 0x30408c: 0xc0c0ccc
    ctx->pc = 0x30408Cu;
    SET_GPR_U32(ctx, 31, 0x304094u);
    ctx->pc = 0x303330u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableIntc_0x303330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304094u; }
    }
    if (ctx->pc != 0x304094u) { return; }
    ctx->pc = 0x304094u;
    // 0x304094: 0xf
    ctx->pc = 0x304094u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304098: 0x12000003
    ctx->pc = 0x304098u;
    {
        const bool branch_taken_0x304098 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30409Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x304098) {
            ctx->pc = 0x3040A8u;
            goto label_3040a8;
        }
    }
    ctx->pc = 0x3040A0u;
    // 0x3040a0: 0x42000038
    ctx->pc = 0x3040a0u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x3040a4: 0xdfbf0010
    ctx->pc = 0x3040a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3040a8:
    // 0x3040a8: 0xdfb00000
    ctx->pc = 0x3040a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3040ac: 0x3e00008
    ctx->pc = 0x3040ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3040B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304070u: goto label_304070;
            case 0x30408Cu: goto label_30408c;
            case 0x3040A8u: goto label_3040a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3040B4u;
}
