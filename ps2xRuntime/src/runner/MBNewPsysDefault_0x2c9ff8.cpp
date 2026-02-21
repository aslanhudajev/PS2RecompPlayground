#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewPsysDefault
// Address: 0x2c9ff8 - 0x2ca04c
void MBNewPsysDefault_0x2c9ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9ff8u;

    // 0x2c9ff8: 0x27bdffe0
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9ffc: 0xffbf0010
    ctx->pc = 0x2c9ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca000: 0xffb00000
    ctx->pc = 0x2ca000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca004: 0x14a00008
    ctx->pc = 0x2CA004u;
    {
        const bool branch_taken_0x2ca004 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CA008u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ca004) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2CA00Cu;
    // 0x2ca00c: 0x32022000
    ctx->pc = 0x2ca00cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8192));
    // 0x2ca010: 0x10400003
    ctx->pc = 0x2CA010u;
    {
        const bool branch_taken_0x2ca010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA014u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2ca010) {
            ctx->pc = 0x2CA020u;
            goto label_2ca020;
        }
    }
    ctx->pc = 0x2CA018u;
    // 0x2ca018: 0x10000003
    ctx->pc = 0x2CA018u;
    {
        const bool branch_taken_0x2ca018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CA01Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953372)));
        if (branch_taken_0x2ca018) {
            ctx->pc = 0x2CA028u;
            goto label_2ca028;
        }
    }
    ctx->pc = 0x2CA020u;
label_2ca020:
    // 0x2ca020: 0x3c020038
    ctx->pc = 0x2ca020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2ca024: 0x8c45c9a0
    ctx->pc = 0x2ca024u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
label_2ca028:
    // 0x2ca028: 0xc0b27c2
    ctx->pc = 0x2CA028u;
    SET_GPR_U32(ctx, 31, 0x2CA030u);
    ctx->pc = 0x2CA02Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        createPsysNode_0x2c9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA030u; }
    }
    if (ctx->pc != 0x2CA030u) { return; }
    ctx->pc = 0x2CA030u;
    // 0x2ca030: 0x54400002
    ctx->pc = 0x2CA030u;
    {
        const bool branch_taken_0x2ca030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ca030) {
            ctx->pc = 0x2CA034u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
            ctx->pc = 0x2CA03Cu;
            goto label_2ca03c;
        }
    }
    ctx->pc = 0x2CA038u;
    // 0x2ca038: 0x102d
    ctx->pc = 0x2ca038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca03c:
    // 0x2ca03c: 0xdfbf0010
    ctx->pc = 0x2ca03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca040: 0xdfb00000
    ctx->pc = 0x2ca040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca044: 0x3e00008
    ctx->pc = 0x2CA044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CA020u: goto label_2ca020;
            case 0x2CA028u: goto label_2ca028;
            case 0x2CA03Cu: goto label_2ca03c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CA04Cu;
}
