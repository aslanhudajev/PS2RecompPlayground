#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPLY_AddDecPic
// Address: 0x19b9e8 - 0x19ba48
void SFPLY_AddDecPic_0x19b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPLY_AddDecPic");


    ctx->pc = 0x19b9e8u;

label_19b9e8:
    // 0x19b9e8: 0x27bdffc0
    ctx->pc = 0x19b9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_19b9ec:
    // 0x19b9ec: 0xffb20020
    ctx->pc = 0x19b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19b9f0:
    // 0x19b9f0: 0xffb10010
    ctx->pc = 0x19b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19b9f4:
    // 0x19b9f4: 0xffb00000
    ctx->pc = 0x19b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19b9f8:
    // 0x19b9f8: 0xc0882d
    ctx->pc = 0x19b9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19b9fc:
    // 0x19b9fc: 0xffbf0030
    ctx->pc = 0x19b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19ba00:
    // 0x19ba00: 0x80802d
    ctx->pc = 0x19ba00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ba04:
    // 0x19ba04: 0x26120940
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2368));
label_19ba08:
    // 0x19ba08: 0x8e020940
    ctx->pc = 0x19ba08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2368)));
label_19ba0c:
    // 0x19ba0c: 0x451021
    ctx->pc = 0x19ba0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19ba10:
    // 0x19ba10: 0xae020940
    ctx->pc = 0x19ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2368), GPR_U32(ctx, 2));
label_19ba14:
    // 0x19ba14: 0xc0674c2
label_19ba18:
    if (ctx->pc == 0x19BA18u) {
        ctx->pc = 0x19BA18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x19BA1Cu;
        goto label_19ba1c;
    }
    ctx->pc = 0x19BA14u;
    SET_GPR_U32(ctx, 31, 0x19BA1Cu);
    ctx->pc = 0x19BA18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA1Cu; }
        else if (ctx->pc != 0x19BA1Cu) { ctx->pc = 0x19BA1Cu; }
    }
    if (ctx->pc != 0x19BA1Cu) { return; }
    ctx->pc = 0x19BA1Cu;
label_19ba1c:
    // 0x19ba1c: 0x10400004
label_19ba20:
    if (ctx->pc == 0x19BA20u) {
        ctx->pc = 0x19BA20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BA24u;
        goto label_19ba24;
    }
    ctx->pc = 0x19BA1Cu;
    {
        const bool branch_taken_0x19ba1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BA20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ba1c) {
            ctx->pc = 0x19BA30u;
            goto label_19ba30;
        }
    }
    ctx->pc = 0x19BA24u;
label_19ba24:
    // 0x19ba24: 0x220282d
    ctx->pc = 0x19ba24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ba28:
    // 0x19ba28: 0x40f809
label_19ba2c:
    if (ctx->pc == 0x19BA2Cu) {
        ctx->pc = 0x19BA2Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BA30u;
        goto label_19ba30;
    }
    ctx->pc = 0x19BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BA30u);
        ctx->pc = 0x19BA2Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B9E8u: goto label_19b9e8;
            case 0x19B9ECu: goto label_19b9ec;
            case 0x19B9F0u: goto label_19b9f0;
            case 0x19B9F4u: goto label_19b9f4;
            case 0x19B9F8u: goto label_19b9f8;
            case 0x19B9FCu: goto label_19b9fc;
            case 0x19BA00u: goto label_19ba00;
            case 0x19BA04u: goto label_19ba04;
            case 0x19BA08u: goto label_19ba08;
            case 0x19BA0Cu: goto label_19ba0c;
            case 0x19BA10u: goto label_19ba10;
            case 0x19BA14u: goto label_19ba14;
            case 0x19BA18u: goto label_19ba18;
            case 0x19BA1Cu: goto label_19ba1c;
            case 0x19BA20u: goto label_19ba20;
            case 0x19BA24u: goto label_19ba24;
            case 0x19BA28u: goto label_19ba28;
            case 0x19BA2Cu: goto label_19ba2c;
            case 0x19BA30u: goto label_19ba30;
            case 0x19BA34u: goto label_19ba34;
            case 0x19BA38u: goto label_19ba38;
            case 0x19BA3Cu: goto label_19ba3c;
            case 0x19BA40u: goto label_19ba40;
            case 0x19BA44u: goto label_19ba44;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BA30u; }
            if (ctx->pc != 0x19BA30u) { return; }
        }
    }
    ctx->pc = 0x19BA30u;
label_19ba30:
    // 0x19ba30: 0xdfbf0030
    ctx->pc = 0x19ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ba34:
    // 0x19ba34: 0xdfb20020
    ctx->pc = 0x19ba34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ba38:
    // 0x19ba38: 0xdfb10010
    ctx->pc = 0x19ba38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ba3c:
    // 0x19ba3c: 0xdfb00000
    ctx->pc = 0x19ba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ba40:
    // 0x19ba40: 0x3e00008
label_19ba44:
    if (ctx->pc == 0x19BA44u) {
        ctx->pc = 0x19BA44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19BA48u;
        goto label_fallthrough_0x19ba40;
    }
    ctx->pc = 0x19BA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BA44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B9E8u: goto label_19b9e8;
            case 0x19B9ECu: goto label_19b9ec;
            case 0x19B9F0u: goto label_19b9f0;
            case 0x19B9F4u: goto label_19b9f4;
            case 0x19B9F8u: goto label_19b9f8;
            case 0x19B9FCu: goto label_19b9fc;
            case 0x19BA00u: goto label_19ba00;
            case 0x19BA04u: goto label_19ba04;
            case 0x19BA08u: goto label_19ba08;
            case 0x19BA0Cu: goto label_19ba0c;
            case 0x19BA10u: goto label_19ba10;
            case 0x19BA14u: goto label_19ba14;
            case 0x19BA18u: goto label_19ba18;
            case 0x19BA1Cu: goto label_19ba1c;
            case 0x19BA20u: goto label_19ba20;
            case 0x19BA24u: goto label_19ba24;
            case 0x19BA28u: goto label_19ba28;
            case 0x19BA2Cu: goto label_19ba2c;
            case 0x19BA30u: goto label_19ba30;
            case 0x19BA34u: goto label_19ba34;
            case 0x19BA38u: goto label_19ba38;
            case 0x19BA3Cu: goto label_19ba3c;
            case 0x19BA40u: goto label_19ba40;
            case 0x19BA44u: goto label_19ba44;
            default: break;
        }
        return;
    }
label_fallthrough_0x19ba40:
    ctx->pc = 0x19BA48u;
}
