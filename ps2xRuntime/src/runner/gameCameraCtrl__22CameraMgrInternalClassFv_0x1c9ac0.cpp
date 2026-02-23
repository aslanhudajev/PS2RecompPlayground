#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gameCameraCtrl__22CameraMgrInternalClassFv
// Address: 0x1c9ac0 - 0x1c9b98
void gameCameraCtrl__22CameraMgrInternalClassFv_0x1c9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gameCameraCtrl__22CameraMgrInternalClassFv");


    ctx->pc = 0x1c9ac0u;

    // 0x1c9ac0: 0x27bdffb0
    ctx->pc = 0x1c9ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c9ac4: 0x7fbf0040
    ctx->pc = 0x1c9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1c9ac8: 0x7fb30030
    ctx->pc = 0x1c9ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c9acc: 0x7fb20020
    ctx->pc = 0x1c9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9ad0: 0x7fb10010
    ctx->pc = 0x1c9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9ad4: 0x70809e28
    ctx->pc = 0x1c9ad4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c9ad8: 0x3c020050
    ctx->pc = 0x1c9ad8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1c9adc: 0x2444e510
    ctx->pc = 0x1c9adcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1c9ae0: 0xc07ce18
    ctx->pc = 0x1C9AE0u;
    SET_GPR_U32(ctx, 31, 0x1C9AE8u);
    ctx->pc = 0x1C9AE4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AE8u; }
        else if (ctx->pc != 0x1C9AE8u) { ctx->pc = 0x1C9AE8u; }
    }
    if (ctx->pc != 0x1C9AE8u) { return; }
    ctx->pc = 0x1C9AE8u;
    // 0x1c9ae8: 0x28410002
    ctx->pc = 0x1c9ae8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 2));
    // 0x1c9aec: 0x10200021
    ctx->pc = 0x1C9AECu;
    {
        const bool branch_taken_0x1c9aec = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C9AF0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c9aec) {
            ctx->pc = 0x1C9B74u;
            goto label_1c9b74;
        }
    }
    ctx->pc = 0x1C9AF4u;
    // 0x1c9af4: 0x70008628
    ctx->pc = 0x1c9af4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9af8: 0x70008e28
    ctx->pc = 0x1c9af8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9afc: 0x72609628
    ctx->pc = 0x1c9afcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1c9b00:
    // 0x1c9b00: 0x8f828c48
    ctx->pc = 0x1c9b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9b04: 0x72602628
    ctx->pc = 0x1c9b04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1c9b08: 0x72002e28
    ctx->pc = 0x1c9b08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c9b0c: 0x511821
    ctx->pc = 0x1c9b0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9b10: 0xc4600090
    ctx->pc = 0x1c9b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b14: 0xe640002c
    ctx->pc = 0x1c9b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1c9b18: 0xc4600094
    ctx->pc = 0x1c9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b1c: 0xe6400030
    ctx->pc = 0x1c9b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1c9b20: 0xc4600098
    ctx->pc = 0x1c9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b24: 0xe6400034
    ctx->pc = 0x1c9b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x1c9b28: 0x8c62009c
    ctx->pc = 0x1c9b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1c9b2c: 0xae420038
    ctx->pc = 0x1c9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1c9b30: 0x8c6200a0
    ctx->pc = 0x1c9b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1c9b34: 0xae42003c
    ctx->pc = 0x1c9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1c9b38: 0x8c6200a4
    ctx->pc = 0x1c9b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1c9b3c: 0xc0727b8
    ctx->pc = 0x1C9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B44u);
    ctx->pc = 0x1C9B40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    ctx->pc = 0x1C9EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getJob__22CameraMgrInternalClassFi_0x1c9ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B44u; }
        else if (ctx->pc != 0x1C9B44u) { ctx->pc = 0x1C9B44u; }
    }
    if (ctx->pc != 0x1C9B44u) { return; }
    ctx->pc = 0x1C9B44u;
    // 0x1c9b44: 0x72602628
    ctx->pc = 0x1c9b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1c9b48: 0x72002e28
    ctx->pc = 0x1c9b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c9b4c: 0xc071b74
    ctx->pc = 0x1C9B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B54u);
    ctx->pc = 0x1C9B50u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1C6DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ptmf_scall_0x1c6dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B54u; }
        else if (ctx->pc != 0x1C9B54u) { ctx->pc = 0x1C9B54u; }
    }
    if (ctx->pc != 0x1C9B54u) { return; }
    ctx->pc = 0x1C9B54u;
    // 0x1c9b54: 0x26100001
    ctx->pc = 0x1c9b54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c9b58: 0xae40014c
    ctx->pc = 0x1c9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
    // 0x1c9b5c: 0x2a020004
    ctx->pc = 0x1c9b5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1c9b60: 0x263100d0
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 208));
    // 0x1c9b64: 0x1440ffe6
    ctx->pc = 0x1C9B64u;
    {
        const bool branch_taken_0x1c9b64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C9B68u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 576));
        if (branch_taken_0x1c9b64) {
            ctx->pc = 0x1C9B00u;
            goto label_1c9b00;
        }
    }
    ctx->pc = 0x1C9B6Cu;
    // 0x1c9b6c: 0x0
    ctx->pc = 0x1c9b6cu;
    // NOP
    // 0x1c9b70: 0x72602628
    ctx->pc = 0x1c9b70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1c9b74:
    // 0x1c9b74: 0xc0726e8
    ctx->pc = 0x1C9B74u;
    SET_GPR_U32(ctx, 31, 0x1C9B7Cu);
    ctx->pc = 0x1C9BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcCamera__22CameraMgrInternalClassFv_0x1c9ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B7Cu; }
        else if (ctx->pc != 0x1C9B7Cu) { ctx->pc = 0x1C9B7Cu; }
    }
    if (ctx->pc != 0x1C9B7Cu) { return; }
    ctx->pc = 0x1C9B7Cu;
    // 0x1c9b7c: 0x7bbf0040
    ctx->pc = 0x1c9b7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9b80: 0x7bb30030
    ctx->pc = 0x1c9b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9b84: 0x7bb20020
    ctx->pc = 0x1c9b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9b88: 0x7bb10010
    ctx->pc = 0x1c9b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b8c: 0x7bb00000
    ctx->pc = 0x1c9b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b90: 0x3e00008
    ctx->pc = 0x1C9B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9B00u: goto label_1c9b00;
            case 0x1C9B74u: goto label_1c9b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9B98u;
}
