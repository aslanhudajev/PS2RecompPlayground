#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfset_SetCondAll
// Address: 0x19d110 - 0x19d18c
void sfset_SetCondAll_0x19d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfset_SetCondAll");


    ctx->pc = 0x19d110u;

    // 0x19d110: 0x27bdffb0
    ctx->pc = 0x19d110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19d114: 0x3c020026
    ctx->pc = 0x19d114u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19d118: 0xffb30030
    ctx->pc = 0x19d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19d11c: 0x2442ddc0
    ctx->pc = 0x19d11cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19d120: 0xffb20020
    ctx->pc = 0x19d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19d124: 0x80982d
    ctx->pc = 0x19d124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d128: 0xffbf0040
    ctx->pc = 0x19d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19d12c: 0xffb00000
    ctx->pc = 0x19d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d130: 0xffb10010
    ctx->pc = 0x19d130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d134: 0x8c510178
    ctx->pc = 0x19d134u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x19d138: 0x8c420174
    ctx->pc = 0x19d138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19d13c: 0x1840000c
    ctx->pc = 0x19D13Cu;
    {
        const bool branch_taken_0x19d13c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19D140u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d13c) {
            ctx->pc = 0x19D170u;
            goto label_19d170;
        }
    }
    ctx->pc = 0x19D144u;
    // 0x19d144: 0x40802d
    ctx->pc = 0x19d144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d148: 0x8e220040
    ctx->pc = 0x19d148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x19d14c: 0x0
    ctx->pc = 0x19d14cu;
    // NOP
label_19d150:
    // 0x19d150: 0x18400004
    ctx->pc = 0x19D150u;
    {
        const bool branch_taken_0x19d150 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19D154u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d150) {
            ctx->pc = 0x19D164u;
            goto label_19d164;
        }
    }
    ctx->pc = 0x19D158u;
    // 0x19d158: 0x260282d
    ctx->pc = 0x19d158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d15c: 0xc067464
    ctx->pc = 0x19D15Cu;
    SET_GPR_U32(ctx, 31, 0x19D164u);
    ctx->pc = 0x19D160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D164u; }
        else if (ctx->pc != 0x19D164u) { ctx->pc = 0x19D164u; }
    }
    if (ctx->pc != 0x19D164u) { return; }
    ctx->pc = 0x19D164u;
label_19d164:
    // 0x19d164: 0x2610ffff
    ctx->pc = 0x19d164u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x19d168: 0x5600fff9
    ctx->pc = 0x19D168u;
    {
        const bool branch_taken_0x19d168 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x19d168) {
            ctx->pc = 0x19D16Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->pc = 0x19D150u;
            goto label_19d150;
        }
    }
    ctx->pc = 0x19D170u;
label_19d170:
    // 0x19d170: 0xdfbf0040
    ctx->pc = 0x19d170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d174: 0xdfb30030
    ctx->pc = 0x19d174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d178: 0xdfb20020
    ctx->pc = 0x19d178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d17c: 0xdfb10010
    ctx->pc = 0x19d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d180: 0xdfb00000
    ctx->pc = 0x19d180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d184: 0x3e00008
    ctx->pc = 0x19D184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D188u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D150u: goto label_19d150;
            case 0x19D164u: goto label_19d164;
            case 0x19D170u: goto label_19d170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D18Cu;
}
