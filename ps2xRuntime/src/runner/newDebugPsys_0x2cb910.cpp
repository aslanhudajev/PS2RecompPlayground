#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: newDebugPsys
// Address: 0x2cb910 - 0x2cb96c
void newDebugPsys_0x2cb910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb910u;

    // 0x2cb910: 0x27bdffd0
    ctx->pc = 0x2cb910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb914: 0xffbf0020
    ctx->pc = 0x2cb914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cb918: 0xffb10010
    ctx->pc = 0x2cb918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cb91c: 0xffb00000
    ctx->pc = 0x2cb91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb920: 0x3c02003a
    ctx->pc = 0x2cb920u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cb924: 0x2451aa38
    ctx->pc = 0x2cb924u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2cb928: 0x8e220068
    ctx->pc = 0x2cb928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2cb92c: 0x14400004
    ctx->pc = 0x2CB92Cu;
    {
        const bool branch_taken_0x2cb92c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CB930u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb92c) {
            ctx->pc = 0x2CB940u;
            goto label_2cb940;
        }
    }
    ctx->pc = 0x2CB934u;
    // 0x2cb934: 0x202d
    ctx->pc = 0x2cb934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb938: 0xc0b2e06
    ctx->pc = 0x2CB938u;
    SET_GPR_U32(ctx, 31, 0x2CB940u);
    ctx->pc = 0x2CB93Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB940u; }
    }
    if (ctx->pc != 0x2CB940u) { return; }
    ctx->pc = 0x2CB940u;
label_2cb940:
    // 0x2cb940: 0x202d
    ctx->pc = 0x2cb940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb944: 0x40282d
    ctx->pc = 0x2cb944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb948: 0x302d
    ctx->pc = 0x2cb948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb94c: 0xc0b2814
    ctx->pc = 0x2CB94Cu;
    SET_GPR_U32(ctx, 31, 0x2CB954u);
    ctx->pc = 0x2CB950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CA050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPsysDescrip_0x2ca050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB954u; }
    }
    if (ctx->pc != 0x2CB954u) { return; }
    ctx->pc = 0x2CB954u;
    // 0x2cb954: 0xae22006c
    ctx->pc = 0x2cb954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x2cb958: 0xdfbf0020
    ctx->pc = 0x2cb958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb95c: 0xdfb10010
    ctx->pc = 0x2cb95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb960: 0xdfb00000
    ctx->pc = 0x2cb960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb964: 0x3e00008
    ctx->pc = 0x2CB964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB940u: goto label_2cb940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB96Cu;
}
