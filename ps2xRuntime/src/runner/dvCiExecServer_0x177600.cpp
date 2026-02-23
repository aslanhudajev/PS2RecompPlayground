#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiExecServer
// Address: 0x177600 - 0x177660
void dvCiExecServer_0x177600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiExecServer");


    ctx->pc = 0x177600u;

    // 0x177600: 0x27bdffc0
    ctx->pc = 0x177600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x177604: 0x3c020024
    ctx->pc = 0x177604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x177608: 0xffb20020
    ctx->pc = 0x177608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17760c: 0xffb10010
    ctx->pc = 0x17760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177610: 0x24120001
    ctx->pc = 0x177610u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177614: 0xffb00000
    ctx->pc = 0x177614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177618: 0x24110027
    ctx->pc = 0x177618u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 39));
    // 0x17761c: 0xffbf0030
    ctx->pc = 0x17761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x177620: 0x245093d8
    ctx->pc = 0x177620u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294939608));
    // 0x177624: 0x82020000
    ctx->pc = 0x177624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_177628:
    // 0x177628: 0x200202d
    ctx->pc = 0x177628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17762c: 0x26100040
    ctx->pc = 0x17762cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
    // 0x177630: 0x14520003
    ctx->pc = 0x177630u;
    {
        const bool branch_taken_0x177630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x177634u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x177630) {
            ctx->pc = 0x177640u;
            goto label_177640;
        }
    }
    ctx->pc = 0x177638u;
    // 0x177638: 0xc05dd5c
    ctx->pc = 0x177638u;
    SET_GPR_U32(ctx, 31, 0x177640u);
    ctx->pc = 0x177570u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvCiExecHndl_0x177570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177640u; }
        else if (ctx->pc != 0x177640u) { ctx->pc = 0x177640u; }
    }
    if (ctx->pc != 0x177640u) { return; }
    ctx->pc = 0x177640u;
label_177640:
    // 0x177640: 0x623fff9
    ctx->pc = 0x177640u;
    {
        const bool branch_taken_0x177640 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x177640) {
            ctx->pc = 0x177644u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x177628u;
            goto label_177628;
        }
    }
    ctx->pc = 0x177648u;
    // 0x177648: 0xdfbf0030
    ctx->pc = 0x177648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17764c: 0xdfb20020
    ctx->pc = 0x17764cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177650: 0xdfb10010
    ctx->pc = 0x177650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177654: 0xdfb00000
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177658: 0x3e00008
    ctx->pc = 0x177658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17765Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177628u: goto label_177628;
            case 0x177640u: goto label_177640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177660u;
}
