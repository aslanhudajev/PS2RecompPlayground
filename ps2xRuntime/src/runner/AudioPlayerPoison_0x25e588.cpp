#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerPoison
// Address: 0x25e588 - 0x25e638
void AudioPlayerPoison_0x25e588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e588u;

    // 0x25e588: 0x27bdffc0
    ctx->pc = 0x25e588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e58c: 0xffbf0030
    ctx->pc = 0x25e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e590: 0xffb20020
    ctx->pc = 0x25e590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e594: 0xffb10010
    ctx->pc = 0x25e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e598: 0xffb00000
    ctx->pc = 0x25e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e59c: 0x80902d
    ctx->pc = 0x25e59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5a0: 0x24032b00
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e5a4: 0x2431818
    ctx->pc = 0x25e5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e5a8: 0x3c020032
    ctx->pc = 0x25e5a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25e5ac: 0x24421bc0
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25e5b0: 0x622021
    ctx->pc = 0x25e5b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e5b4: 0x3c030034
    ctx->pc = 0x25e5b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25e5b8: 0x2463d6b0
    ctx->pc = 0x25e5b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956720));
    // 0x25e5bc: 0x8c820008
    ctx->pc = 0x25e5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25e5c0: 0x21080
    ctx->pc = 0x25e5c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e5c4: 0x431021
    ctx->pc = 0x25e5c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e5c8: 0x8c510000
    ctx->pc = 0x25e5c8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e5cc: 0x6200015
    ctx->pc = 0x25E5CCu;
    {
        const bool branch_taken_0x25e5cc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x25E5D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25e5cc) {
            ctx->pc = 0x25E624u;
            goto label_25e624;
        }
    }
    ctx->pc = 0x25E5D4u;
    // 0x25e5d4: 0xc088648
    ctx->pc = 0x25E5D4u;
    SET_GPR_U32(ctx, 31, 0x25E5DCu);
    ctx->pc = 0x25E5D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 80));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E5DCu; }
    }
    if (ctx->pc != 0x25E5DCu) { return; }
    ctx->pc = 0x25E5DCu;
    // 0x25e5dc: 0x40802d
    ctx->pc = 0x25e5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5e0: 0xc0975da
    ctx->pc = 0x25E5E0u;
    SET_GPR_U32(ctx, 31, 0x25E5E8u);
    ctx->pc = 0x25E5E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E5E8u; }
    }
    if (ctx->pc != 0x25E5E8u) { return; }
    ctx->pc = 0x25E5E8u;
    // 0x25e5e8: 0x24040062
    ctx->pc = 0x25e5e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    // 0x25e5ec: 0x222200a
    ctx->pc = 0x25e5ecu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 17));
    // 0x25e5f0: 0x240500c0
    ctx->pc = 0x25e5f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 192));
    // 0x25e5f4: 0x200302d
    ctx->pc = 0x25e5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e5f8: 0x24070042
    ctx->pc = 0x25e5f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    // 0x25e5fc: 0x3c01bf80
    ctx->pc = 0x25e5fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e600: 0x44816000
    ctx->pc = 0x25e600u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e604: 0x3c013f80
    ctx->pc = 0x25e604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e608: 0x44816800
    ctx->pc = 0x25e608u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e60c: 0xdfbf0030
    ctx->pc = 0x25e60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e610: 0xdfb20020
    ctx->pc = 0x25e610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e614: 0xdfb10010
    ctx->pc = 0x25e614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e618: 0xdfb00000
    ctx->pc = 0x25e618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e61c: 0x8088c86
    ctx->pc = 0x25E61Cu;
    ctx->pc = 0x25E620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x223218u;
    AudioQueAdd4_0x223218(rdram, ctx, runtime); return;
    ctx->pc = 0x25E624u;
label_25e624:
    // 0x25e624: 0xdfb20020
    ctx->pc = 0x25e624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e628: 0xdfb10010
    ctx->pc = 0x25e628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e62c: 0xdfb00000
    ctx->pc = 0x25e62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e630: 0x3e00008
    ctx->pc = 0x25E630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E634u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E624u: goto label_25e624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E638u;
}
