#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerTurbo
// Address: 0x25e950 - 0x25eac0
void AudioPlayerTurbo_0x25e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e950u;

    // 0x25e950: 0x27bdffb0
    ctx->pc = 0x25e950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25e954: 0xffbf0040
    ctx->pc = 0x25e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25e958: 0xffb30030
    ctx->pc = 0x25e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25e95c: 0xffb20020
    ctx->pc = 0x25e95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25e960: 0xffb10010
    ctx->pc = 0x25e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25e964: 0xffb00000
    ctx->pc = 0x25e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e968: 0xa0802d
    ctx->pc = 0x25e968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e96c: 0xc0982d
    ctx->pc = 0x25e96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e970: 0x3c050032
    ctx->pc = 0x25e970u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x25e974: 0x24a51bc0
    ctx->pc = 0x25e974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x25e978: 0x24022b00
    ctx->pc = 0x25e978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25e97c: 0x821018
    ctx->pc = 0x25e97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25e980: 0x451821
    ctx->pc = 0x25e980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25e984: 0x8c720008
    ctx->pc = 0x25e984u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25e988: 0xa28821
    ctx->pc = 0x25e988u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25e98c: 0xc0975da
    ctx->pc = 0x25E98Cu;
    SET_GPR_U32(ctx, 31, 0x25E994u);
    ctx->pc = 0x25E990u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x25D768u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chicken_0x25d768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E994u; }
    }
    if (ctx->pc != 0x25E994u) { return; }
    ctx->pc = 0x25E994u;
    // 0x25e994: 0x1040000c
    ctx->pc = 0x25E994u;
    {
        const bool branch_taken_0x25e994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25e994) {
            ctx->pc = 0x25E9C8u;
            goto label_25e9c8;
        }
    }
    ctx->pc = 0x25E99Cu;
    // 0x25e99c: 0x2404005f
    ctx->pc = 0x25e99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 95));
    // 0x25e9a0: 0x220282d
    ctx->pc = 0x25e9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e9a4: 0x240600e0
    ctx->pc = 0x25e9a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e9a8: 0x24070010
    ctx->pc = 0x25e9a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x25e9ac: 0xdfbf0040
    ctx->pc = 0x25e9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e9b0: 0xdfb30030
    ctx->pc = 0x25e9b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e9b4: 0xdfb20020
    ctx->pc = 0x25e9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e9b8: 0xdfb10010
    ctx->pc = 0x25e9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e9bc: 0xdfb00000
    ctx->pc = 0x25e9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e9c0: 0x8088a26
    ctx->pc = 0x25E9C0u;
    ctx->pc = 0x25E9C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25E9C8u;
label_25e9c8:
    // 0x25e9c8: 0x1202001b
    ctx->pc = 0x25E9C8u;
    {
        const bool branch_taken_0x25e9c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E9CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
        if (branch_taken_0x25e9c8) {
            ctx->pc = 0x25EA38u;
            goto label_25ea38;
        }
    }
    ctx->pc = 0x25E9D0u;
    // 0x25e9d0: 0x50400005
    ctx->pc = 0x25E9D0u;
    {
        const bool branch_taken_0x25e9d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25e9d0) {
            ctx->pc = 0x25E9D4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x25E9E8u;
            goto label_25e9e8;
        }
    }
    ctx->pc = 0x25E9D8u;
    // 0x25e9d8: 0x12000007
    ctx->pc = 0x25E9D8u;
    {
        const bool branch_taken_0x25e9d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E9DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x25e9d8) {
            ctx->pc = 0x25E9F8u;
            goto label_25e9f8;
        }
    }
    ctx->pc = 0x25E9E0u;
    // 0x25e9e0: 0x10000032
    ctx->pc = 0x25E9E0u;
    {
        const bool branch_taken_0x25e9e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E9E4u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25e9e0) {
            ctx->pc = 0x25EAACu;
            goto label_25eaac;
        }
    }
    ctx->pc = 0x25E9E8u;
label_25e9e8:
    // 0x25e9e8: 0x12020022
    ctx->pc = 0x25E9E8u;
    {
        const bool branch_taken_0x25e9e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x25E9ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x25e9e8) {
            ctx->pc = 0x25EA74u;
            goto label_25ea74;
        }
    }
    ctx->pc = 0x25E9F0u;
    // 0x25e9f0: 0x1000002e
    ctx->pc = 0x25E9F0u;
    {
        const bool branch_taken_0x25e9f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25E9F4u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x25e9f0) {
            ctx->pc = 0x25EAACu;
            goto label_25eaac;
        }
    }
    ctx->pc = 0x25E9F8u;
label_25e9f8:
    // 0x25e9f8: 0x3c020034
    ctx->pc = 0x25e9f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25e9fc: 0x2442d750
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956880));
    // 0x25ea00: 0x131880
    ctx->pc = 0x25ea00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x25ea04: 0x122100
    ctx->pc = 0x25ea04u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 18), 4));
    // 0x25ea08: 0x641821
    ctx->pc = 0x25ea08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25ea0c: 0x621821
    ctx->pc = 0x25ea0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ea10: 0x8c640000
    ctx->pc = 0x25ea10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ea14: 0x220282d
    ctx->pc = 0x25ea14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea18: 0x240600e0
    ctx->pc = 0x25ea18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ea1c: 0x24070013
    ctx->pc = 0x25ea1cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 19));
    // 0x25ea20: 0xdfb30030
    ctx->pc = 0x25ea20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ea24: 0xdfb20020
    ctx->pc = 0x25ea24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ea28: 0xdfb10010
    ctx->pc = 0x25ea28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea2c: 0xdfb00000
    ctx->pc = 0x25ea2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea30: 0x8088a26
    ctx->pc = 0x25EA30u;
    ctx->pc = 0x25EA34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EA38u;
label_25ea38:
    // 0x25ea38: 0x3c030034
    ctx->pc = 0x25ea38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ea3c: 0x2463d7d0
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957008));
    // 0x25ea40: 0x121080
    ctx->pc = 0x25ea40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x25ea44: 0x431021
    ctx->pc = 0x25ea44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ea48: 0x8c440000
    ctx->pc = 0x25ea48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ea4c: 0x220282d
    ctx->pc = 0x25ea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea50: 0x240600e0
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ea54: 0x24070011
    ctx->pc = 0x25ea54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 17));
    // 0x25ea58: 0xdfbf0040
    ctx->pc = 0x25ea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ea5c: 0xdfb30030
    ctx->pc = 0x25ea5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ea60: 0xdfb20020
    ctx->pc = 0x25ea60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ea64: 0xdfb10010
    ctx->pc = 0x25ea64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea68: 0xdfb00000
    ctx->pc = 0x25ea68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea6c: 0x8088a26
    ctx->pc = 0x25EA6Cu;
    ctx->pc = 0x25EA70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EA74u;
label_25ea74:
    // 0x25ea74: 0x3c030034
    ctx->pc = 0x25ea74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ea78: 0x2463d7f0
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957040));
    // 0x25ea7c: 0x121080
    ctx->pc = 0x25ea7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x25ea80: 0x431021
    ctx->pc = 0x25ea80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ea84: 0x8c440000
    ctx->pc = 0x25ea84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ea88: 0x220282d
    ctx->pc = 0x25ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea8c: 0x240600e0
    ctx->pc = 0x25ea8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ea90: 0x24070010
    ctx->pc = 0x25ea90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x25ea94: 0xdfb30030
    ctx->pc = 0x25ea94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ea98: 0xdfb20020
    ctx->pc = 0x25ea98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ea9c: 0xdfb10010
    ctx->pc = 0x25ea9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eaa0: 0xdfb00000
    ctx->pc = 0x25eaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eaa4: 0x8088a26
    ctx->pc = 0x25EAA4u;
    ctx->pc = 0x25EAA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EAACu;
label_25eaac:
    // 0x25eaac: 0xdfb20020
    ctx->pc = 0x25eaacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25eab0: 0xdfb10010
    ctx->pc = 0x25eab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eab4: 0xdfb00000
    ctx->pc = 0x25eab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eab8: 0x3e00008
    ctx->pc = 0x25EAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EABCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E9C8u: goto label_25e9c8;
            case 0x25E9E8u: goto label_25e9e8;
            case 0x25E9F8u: goto label_25e9f8;
            case 0x25EA38u: goto label_25ea38;
            case 0x25EA74u: goto label_25ea74;
            case 0x25EAACu: goto label_25eaac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EAC0u;
}
