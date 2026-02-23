#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_ExecServer
// Address: 0x1705f0 - 0x170650
void ADXSJE_ExecServer_0x1705f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_ExecServer");


    ctx->pc = 0x1705f0u;

    // 0x1705f0: 0x27bdffc0
    ctx->pc = 0x1705f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1705f4: 0x3c020023
    ctx->pc = 0x1705f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1705f8: 0xffb00000
    ctx->pc = 0x1705f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1705fc: 0xffb20020
    ctx->pc = 0x1705fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170600: 0x24505bc0
    ctx->pc = 0x170600u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x170604: 0xffb10010
    ctx->pc = 0x170604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x170608: 0x24120001
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17060c: 0xffbf0030
    ctx->pc = 0x17060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x170610: 0x26111640
    ctx->pc = 0x170610u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 5696));
    // 0x170614: 0x82020000
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_170618:
    // 0x170618: 0x54520004
    ctx->pc = 0x170618u;
    {
        const bool branch_taken_0x170618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x170618) {
            ctx->pc = 0x17061Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 712));
            ctx->pc = 0x17062Cu;
            goto label_17062c;
        }
    }
    ctx->pc = 0x170620u;
    // 0x170620: 0xc05c170
    ctx->pc = 0x170620u;
    SET_GPR_U32(ctx, 31, 0x170628u);
    ctx->pc = 0x170624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1705C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJE_ExecHndl_0x1705c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170628u; }
        else if (ctx->pc != 0x170628u) { ctx->pc = 0x170628u; }
    }
    if (ctx->pc != 0x170628u) { return; }
    ctx->pc = 0x170628u;
    // 0x170628: 0x261002c8
    ctx->pc = 0x170628u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 712));
label_17062c:
    // 0x17062c: 0x211102a
    ctx->pc = 0x17062cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x170630: 0x5440fff9
    ctx->pc = 0x170630u;
    {
        const bool branch_taken_0x170630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170630) {
            ctx->pc = 0x170634u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x170618u;
            goto label_170618;
        }
    }
    ctx->pc = 0x170638u;
    // 0x170638: 0xdfbf0030
    ctx->pc = 0x170638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17063c: 0xdfb20020
    ctx->pc = 0x17063cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170640: 0xdfb10010
    ctx->pc = 0x170640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170644: 0xdfb00000
    ctx->pc = 0x170644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170648: 0x3e00008
    ctx->pc = 0x170648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17064Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170618u: goto label_170618;
            case 0x17062Cu: goto label_17062c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170650u;
}
