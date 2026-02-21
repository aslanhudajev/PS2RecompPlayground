#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerDies
// Address: 0x25ec90 - 0x25ed44
void AudioPlayerDies_0x25ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ec90u;

    // 0x25ec90: 0x27bdffc0
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ec94: 0xffbf0030
    ctx->pc = 0x25ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ec98: 0xffb20020
    ctx->pc = 0x25ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ec9c: 0xffb10010
    ctx->pc = 0x25ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25eca0: 0xffb00000
    ctx->pc = 0x25eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25eca4: 0x80902d
    ctx->pc = 0x25eca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eca8: 0x24032b00
    ctx->pc = 0x25eca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ecac: 0x2431818
    ctx->pc = 0x25ecacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ecb0: 0x3c020032
    ctx->pc = 0x25ecb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ecb4: 0x24421bc0
    ctx->pc = 0x25ecb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25ecb8: 0x628021
    ctx->pc = 0x25ecb8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ecbc: 0x8e0300fc
    ctx->pc = 0x25ecbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x25ecc0: 0x24020001
    ctx->pc = 0x25ecc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ecc4: 0x1462001a
    ctx->pc = 0x25ECC4u;
    {
        const bool branch_taken_0x25ecc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25ECC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25ecc4) {
            ctx->pc = 0x25ED30u;
            goto label_25ed30;
        }
    }
    ctx->pc = 0x25ECCCu;
    // 0x25eccc: 0x26110050
    ctx->pc = 0x25ecccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
    // 0x25ecd0: 0x24040001
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ecd4: 0x220282d
    ctx->pc = 0x25ecd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ecd8: 0x2406007f
    ctx->pc = 0x25ecd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ecdc: 0xc088a26
    ctx->pc = 0x25ECDCu;
    SET_GPR_U32(ctx, 31, 0x25ECE4u);
    ctx->pc = 0x25ECE0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ECE4u; }
    }
    if (ctx->pc != 0x25ECE4u) { return; }
    ctx->pc = 0x25ECE4u;
    // 0x25ece4: 0x3c030034
    ctx->pc = 0x25ece4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ece8: 0x2463d898
    ctx->pc = 0x25ece8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957208));
    // 0x25ecec: 0x8e020008
    ctx->pc = 0x25ececu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25ecf0: 0x21080
    ctx->pc = 0x25ecf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ecf4: 0x431021
    ctx->pc = 0x25ecf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ecf8: 0x8c500000
    ctx->pc = 0x25ecf8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ecfc: 0xc0975da
    ctx->pc = 0x25ECFCu;
    SET_GPR_U32(ctx, 31, 0x25ED04u);
    ctx->pc = 0x25ED00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ED04u; }
    }
    if (ctx->pc != 0x25ED04u) { return; }
    ctx->pc = 0x25ED04u;
    // 0x25ed04: 0x24040062
    ctx->pc = 0x25ed04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 98));
    // 0x25ed08: 0x202200a
    ctx->pc = 0x25ed08u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
    // 0x25ed0c: 0x220282d
    ctx->pc = 0x25ed0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ed10: 0x240600e0
    ctx->pc = 0x25ed10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ed14: 0x24070007
    ctx->pc = 0x25ed14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    // 0x25ed18: 0xdfbf0030
    ctx->pc = 0x25ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ed1c: 0xdfb20020
    ctx->pc = 0x25ed1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ed20: 0xdfb10010
    ctx->pc = 0x25ed20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ed24: 0xdfb00000
    ctx->pc = 0x25ed24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed28: 0x8088a26
    ctx->pc = 0x25ED28u;
    ctx->pc = 0x25ED2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25ED30u;
label_25ed30:
    // 0x25ed30: 0xdfb20020
    ctx->pc = 0x25ed30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ed34: 0xdfb10010
    ctx->pc = 0x25ed34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ed38: 0xdfb00000
    ctx->pc = 0x25ed38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ed3c: 0x3e00008
    ctx->pc = 0x25ED3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ED40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25ED30u: goto label_25ed30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25ED44u;
}
