#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_DestroyAll
// Address: 0x171918 - 0x171978
void ADXT_DestroyAll_0x171918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_DestroyAll");


    ctx->pc = 0x171918u;

    // 0x171918: 0x27bdffc0
    ctx->pc = 0x171918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17191c: 0x3c020023
    ctx->pc = 0x17191cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x171920: 0xffb00000
    ctx->pc = 0x171920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171924: 0xffb20020
    ctx->pc = 0x171924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x171928: 0x2450dd60
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x17192c: 0xffb10010
    ctx->pc = 0x17192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x171930: 0x24120001
    ctx->pc = 0x171930u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171934: 0xffbf0030
    ctx->pc = 0x171934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171938: 0x26110520
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1312));
    // 0x17193c: 0x82020000
    ctx->pc = 0x17193cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_171940:
    // 0x171940: 0x54520004
    ctx->pc = 0x171940u;
    {
        const bool branch_taken_0x171940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x171940) {
            ctx->pc = 0x171944u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 164));
            ctx->pc = 0x171954u;
            goto label_171954;
        }
    }
    ctx->pc = 0x171948u;
    // 0x171948: 0xc05c5d6
    ctx->pc = 0x171948u;
    SET_GPR_U32(ctx, 31, 0x171950u);
    ctx->pc = 0x17194Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Destroy_0x171758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171950u; }
        else if (ctx->pc != 0x171950u) { ctx->pc = 0x171950u; }
    }
    if (ctx->pc != 0x171950u) { return; }
    ctx->pc = 0x171950u;
    // 0x171950: 0x261000a4
    ctx->pc = 0x171950u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 164));
label_171954:
    // 0x171954: 0x211102a
    ctx->pc = 0x171954u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x171958: 0x5440fff9
    ctx->pc = 0x171958u;
    {
        const bool branch_taken_0x171958 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x171958) {
            ctx->pc = 0x17195Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x171940u;
            goto label_171940;
        }
    }
    ctx->pc = 0x171960u;
    // 0x171960: 0xdfbf0030
    ctx->pc = 0x171960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171964: 0xdfb20020
    ctx->pc = 0x171964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171968: 0xdfb10010
    ctx->pc = 0x171968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17196c: 0xdfb00000
    ctx->pc = 0x17196cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171970: 0x3e00008
    ctx->pc = 0x171970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171940u: goto label_171940;
            case 0x171954u: goto label_171954;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171978u;
}
