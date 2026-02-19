#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetActiveTime
// Address: 0x251308 - 0x25134c
void GetActiveTime_0x251308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251308u;

    // 0x251308: 0x27bdffe0
    ctx->pc = 0x251308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25130c: 0xffbf0010
    ctx->pc = 0x25130cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251310: 0xffb00000
    ctx->pc = 0x251310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251314: 0x10800009
    ctx->pc = 0x251314u;
    {
        const bool branch_taken_0x251314 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x251318u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251314) {
            ctx->pc = 0x25133Cu;
            goto label_25133c;
        }
    }
    ctx->pc = 0x25131Cu;
    // 0x25131c: 0x4810007
    ctx->pc = 0x25131Cu;
    {
        const bool branch_taken_0x25131c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x251320u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25131c) {
            ctx->pc = 0x25133Cu;
            goto label_25133c;
        }
    }
    ctx->pc = 0x251324u;
    // 0x251324: 0x48023
    ctx->pc = 0x251324u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x251328: 0xc0b5c24
    ctx->pc = 0x251328u;
    SET_GPR_U32(ctx, 31, 0x251330u);
    ctx->pc = 0x25132Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251330u; }
    }
    if (ctx->pc != 0x251330u) { return; }
    ctx->pc = 0x251330u;
    // 0x251330: 0x102043
    ctx->pc = 0x251330u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 1));
    // 0x251334: 0x822021
    ctx->pc = 0x251334u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251338: 0x80102d
    ctx->pc = 0x251338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25133c:
    // 0x25133c: 0xdfbf0010
    ctx->pc = 0x25133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251340: 0xdfb00000
    ctx->pc = 0x251340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251344: 0x3e00008
    ctx->pc = 0x251344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25133Cu: goto label_25133c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25134Cu;
}
