#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerPain
// Address: 0x25e288 - 0x25e35c
void AudioPlayerPain_0x25e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e288u;

    // 0x25e288: 0x27bdffb0
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e28c: 0xffbf0040
    ctx->pc = 0x25e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25e290: 0xffb30030
    ctx->pc = 0x25e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25e294: 0xffb20020
    ctx->pc = 0x25e294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e298: 0xffb10010
    ctx->pc = 0x25e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e29c: 0xffb00000
    ctx->pc = 0x25e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e2a0: 0x80982d
    ctx->pc = 0x25e2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2a4: 0x24032b00
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e2a8: 0x2631818
    ctx->pc = 0x25e2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e2ac: 0x3c020032
    ctx->pc = 0x25e2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e2b0: 0x24421bc0
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e2b4: 0x629021
    ctx->pc = 0x25e2b4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e2b8: 0x8e4300fc
    ctx->pc = 0x25e2b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x25e2bc: 0x24020001
    ctx->pc = 0x25e2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e2c0: 0x14620020
    ctx->pc = 0x25E2C0u;
    {
        const bool branch_taken_0x25e2c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25E2C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x25e2c0) {
            ctx->pc = 0x25E344u;
            goto label_25e344;
        }
    }
    ctx->pc = 0x25E2C8u;
    // 0x25e2c8: 0xc088648
    ctx->pc = 0x25E2C8u;
    SET_GPR_U32(ctx, 31, 0x25E2D0u);
    ctx->pc = 0x25E2CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E2D0u; }
    }
    if (ctx->pc != 0x25E2D0u) { return; }
    ctx->pc = 0x25E2D0u;
    // 0x25e2d0: 0x40882d
    ctx->pc = 0x25e2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e2d4: 0x3c100034
    ctx->pc = 0x25e2d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x25e2d8: 0x2610d570
    ctx->pc = 0x25e2d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294956400));
    // 0x25e2dc: 0xc0b5c24
    ctx->pc = 0x25E2DCu;
    SET_GPR_U32(ctx, 31, 0x25E2E4u);
    ctx->pc = 0x25E2E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E2E4u; }
    }
    if (ctx->pc != 0x25E2E4u) { return; }
    ctx->pc = 0x25E2E4u;
    // 0x25e2e4: 0x21080
    ctx->pc = 0x25e2e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e2e8: 0x8e430008
    ctx->pc = 0x25e2e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x25e2ec: 0x31900
    ctx->pc = 0x25e2ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e2f0: 0x431021
    ctx->pc = 0x25e2f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e2f4: 0x501021
    ctx->pc = 0x25e2f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25e2f8: 0x8c500000
    ctx->pc = 0x25e2f8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e2fc: 0xc0975da
    ctx->pc = 0x25E2FCu;
    SET_GPR_U32(ctx, 31, 0x25E304u);
    ctx->pc = 0x25E300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E304u; }
    }
    if (ctx->pc != 0x25E304u) { return; }
    ctx->pc = 0x25E304u;
    // 0x25e304: 0x24040060
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x25e308: 0x202200a
    ctx->pc = 0x25e308u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
    // 0x25e30c: 0x240500e0
    ctx->pc = 0x25e30cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e310: 0x220302d
    ctx->pc = 0x25e310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e314: 0x24070064
    ctx->pc = 0x25e314u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    // 0x25e318: 0x3c01bf80
    ctx->pc = 0x25e318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e31c: 0x44816000
    ctx->pc = 0x25e31cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e320: 0x3c013f80
    ctx->pc = 0x25e320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e324: 0x44816800
    ctx->pc = 0x25e324u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e328: 0xdfbf0040
    ctx->pc = 0x25e328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e32c: 0xdfb30030
    ctx->pc = 0x25e32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e330: 0xdfb20020
    ctx->pc = 0x25e330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e334: 0xdfb10010
    ctx->pc = 0x25e334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e338: 0xdfb00000
    ctx->pc = 0x25e338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e33c: 0x8088c86
    ctx->pc = 0x25E33Cu;
    ctx->pc = 0x25E340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x223218u;
    AudioQueAdd4_0x223218(rdram, ctx, runtime); return;
    ctx->pc = 0x25E344u;
label_25e344:
    // 0x25e344: 0xdfb30030
    ctx->pc = 0x25e344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e348: 0xdfb20020
    ctx->pc = 0x25e348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e34c: 0xdfb10010
    ctx->pc = 0x25e34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e350: 0xdfb00000
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e354: 0x3e00008
    ctx->pc = 0x25E354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E344u: goto label_25e344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E35Cu;
}
