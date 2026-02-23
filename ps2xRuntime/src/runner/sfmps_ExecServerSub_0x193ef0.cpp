#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ExecServerSub
// Address: 0x193ef0 - 0x193f50
void sfmps_ExecServerSub_0x193ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ExecServerSub");


    ctx->pc = 0x193ef0u;

    // 0x193ef0: 0x27bdffd0
    ctx->pc = 0x193ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193ef4: 0xffb00000
    ctx->pc = 0x193ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193ef8: 0x80802d
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193efc: 0xffbf0020
    ctx->pc = 0x193efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193f00: 0xc065306
    ctx->pc = 0x193F00u;
    SET_GPR_U32(ctx, 31, 0x193F08u);
    ctx->pc = 0x193F04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x194C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetTermDst_0x194c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F08u; }
        else if (ctx->pc != 0x193F08u) { ctx->pc = 0x193F08u; }
    }
    if (ctx->pc != 0x193F08u) { return; }
    ctx->pc = 0x193F08u;
    // 0x193f08: 0x24030001
    ctx->pc = 0x193f08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f0c: 0x1043000b
    ctx->pc = 0x193F0Cu;
    {
        const bool branch_taken_0x193f0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x193F10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f0c) {
            ctx->pc = 0x193F3Cu;
            goto label_193f3c;
        }
    }
    ctx->pc = 0x193F14u;
    // 0x193f14: 0xc064fd4
    ctx->pc = 0x193F14u;
    SET_GPR_U32(ctx, 31, 0x193F1Cu);
    ctx->pc = 0x193F18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_DecodeSomeUnit_0x193f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F1Cu; }
        else if (ctx->pc != 0x193F1Cu) { ctx->pc = 0x193F1Cu; }
    }
    if (ctx->pc != 0x193F1Cu) { return; }
    ctx->pc = 0x193F1Cu;
    // 0x193f1c: 0x40882d
    ctx->pc = 0x193f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f20: 0x8e030040
    ctx->pc = 0x193f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x193f24: 0x24020002
    ctx->pc = 0x193f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x193f28: 0x14620004
    ctx->pc = 0x193F28u;
    {
        const bool branch_taken_0x193f28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x193F2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193f28) {
            ctx->pc = 0x193F3Cu;
            goto label_193f3c;
        }
    }
    ctx->pc = 0x193F30u;
    // 0x193f30: 0xc06537c
    ctx->pc = 0x193F30u;
    SET_GPR_U32(ctx, 31, 0x193F38u);
    ctx->pc = 0x193F34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ProcPrep_0x194df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F38u; }
        else if (ctx->pc != 0x193F38u) { ctx->pc = 0x193F38u; }
    }
    if (ctx->pc != 0x193F38u) { return; }
    ctx->pc = 0x193F38u;
    // 0x193f38: 0x220102d
    ctx->pc = 0x193f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193f3c:
    // 0x193f3c: 0xdfbf0020
    ctx->pc = 0x193f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193f40: 0xdfb10010
    ctx->pc = 0x193f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193f44: 0xdfb00000
    ctx->pc = 0x193f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f48: 0x3e00008
    ctx->pc = 0x193F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193F4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193F3Cu: goto label_193f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193F50u;
}
