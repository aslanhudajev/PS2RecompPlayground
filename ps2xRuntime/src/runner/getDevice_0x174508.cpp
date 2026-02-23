#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getDevice
// Address: 0x174508 - 0x17459c
void getDevice_0x174508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getDevice");


    ctx->pc = 0x174508u;

    // 0x174508: 0x27bdffa0
    ctx->pc = 0x174508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17450c: 0xffb20020
    ctx->pc = 0x17450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174510: 0x80902d
    ctx->pc = 0x174510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174514: 0xffb40040
    ctx->pc = 0x174514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x174518: 0xffb30030
    ctx->pc = 0x174518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17451c: 0xffb10010
    ctx->pc = 0x17451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174520: 0xffb00000
    ctx->pc = 0x174520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174524: 0xffbf0050
    ctx->pc = 0x174524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x174528: 0xc051554
    ctx->pc = 0x174528u;
    SET_GPR_U32(ctx, 31, 0x174530u);
    ctx->pc = 0x17452Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174530u; }
        else if (ctx->pc != 0x174530u) { ctx->pc = 0x174530u; }
    }
    if (ctx->pc != 0x174530u) { return; }
    ctx->pc = 0x174530u;
    // 0x174530: 0x40a02d
    ctx->pc = 0x174530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174534: 0x3c02002e
    ctx->pc = 0x174534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x174538: 0x2442f2ec
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963948));
    // 0x17453c: 0x40882d
    ctx->pc = 0x17453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174540: 0x2450fffc
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x174544: 0x0
    ctx->pc = 0x174544u;
    // NOP
label_174548:
    // 0x174548: 0x240202d
    ctx->pc = 0x174548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17454c: 0x220282d
    ctx->pc = 0x17454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174550: 0xc05160e
    ctx->pc = 0x174550u;
    SET_GPR_U32(ctx, 31, 0x174558u);
    ctx->pc = 0x174554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174558u; }
        else if (ctx->pc != 0x174558u) { ctx->pc = 0x174558u; }
    }
    if (ctx->pc != 0x174558u) { return; }
    ctx->pc = 0x174558u;
    // 0x174558: 0x14400003
    ctx->pc = 0x174558u;
    {
        const bool branch_taken_0x174558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17455Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x174558) {
            ctx->pc = 0x174568u;
            goto label_174568;
        }
    }
    ctx->pc = 0x174560u;
    // 0x174560: 0x10000006
    ctx->pc = 0x174560u;
    {
        const bool branch_taken_0x174560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174564u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x174560) {
            ctx->pc = 0x17457Cu;
            goto label_17457c;
        }
    }
    ctx->pc = 0x174568u;
label_174568:
    // 0x174568: 0x26100010
    ctx->pc = 0x174568u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
    // 0x17456c: 0x2e620020
    ctx->pc = 0x17456cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 32));
    // 0x174570: 0x1440fff5
    ctx->pc = 0x174570u;
    {
        const bool branch_taken_0x174570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174574u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x174570) {
            ctx->pc = 0x174548u;
            goto label_174548;
        }
    }
    ctx->pc = 0x174578u;
    // 0x174578: 0x102d
    ctx->pc = 0x174578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17457c:
    // 0x17457c: 0xdfbf0050
    ctx->pc = 0x17457cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174580: 0xdfb40040
    ctx->pc = 0x174580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174584: 0xdfb30030
    ctx->pc = 0x174584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174588: 0xdfb20020
    ctx->pc = 0x174588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17458c: 0xdfb10010
    ctx->pc = 0x17458cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174590: 0xdfb00000
    ctx->pc = 0x174590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174594: 0x3e00008
    ctx->pc = 0x174594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174598u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174548u: goto label_174548;
            case 0x174568u: goto label_174568;
            case 0x17457Cu: goto label_17457c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17459Cu;
}
