#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLoadTextureOnce
// Address: 0x1a9a20 - 0x1a9c08
void nlObjPutLoadTextureOnce_0x1a9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLoadTextureOnce");


    ctx->pc = 0x1a9a20u;

    // 0x1a9a20: 0x27bdff40
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a9a24: 0x7fbf0090
    ctx->pc = 0x1a9a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1a9a28: 0x7fbe0080
    ctx->pc = 0x1a9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1a9a2c: 0x7fb70070
    ctx->pc = 0x1a9a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1a9a30: 0x7fb60060
    ctx->pc = 0x1a9a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a9a34: 0x7fb50050
    ctx->pc = 0x1a9a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a9a38: 0x7fb40040
    ctx->pc = 0x1a9a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a9a3c: 0x7fb30030
    ctx->pc = 0x1a9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a9a40: 0x7fb20020
    ctx->pc = 0x1a9a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a9a44: 0x7fb10010
    ctx->pc = 0x1a9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9a48: 0x7fb00000
    ctx->pc = 0x1a9a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a9a4c: 0x70a0ae28
    ctx->pc = 0x1a9a4cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a9a50: 0x70c0a628
    ctx->pc = 0x1a9a50u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a9a54: 0x14e00020
    ctx->pc = 0x1A9A54u;
    {
        const bool branch_taken_0x1a9a54 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9A58u;
        SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9a54) {
            ctx->pc = 0x1A9AD8u;
            goto label_1a9ad8;
        }
    }
    ctx->pc = 0x1A9A5Cu;
    // 0x1a9a5c: 0x8ea20000
    ctx->pc = 0x1a9a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a9a60: 0x26b30010
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a9a64: 0x72608628
    ctx->pc = 0x1a9a64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a9a68: 0x48a03
    ctx->pc = 0x1a9a68u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 8));
    // 0x1a9a6c: 0x4810014
    ctx->pc = 0x1A9A6Cu;
    {
        const bool branch_taken_0x1a9a6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A9A70u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x1a9a6c) {
            ctx->pc = 0x1A9AC0u;
            goto label_1a9ac0;
        }
    }
    ctx->pc = 0x1A9A74u;
    // 0x1a9a74: 0x248200ff
    ctx->pc = 0x1a9a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 255));
    // 0x1a9a78: 0x28a03
    ctx->pc = 0x1a9a78u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1a9a7c: 0x10000011
    ctx->pc = 0x1A9A7Cu;
    {
        const bool branch_taken_0x1a9a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9A80u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x1a9a7c) {
            ctx->pc = 0x1A9AC4u;
            goto label_1a9ac4;
        }
    }
    ctx->pc = 0x1A9A84u;
label_1a9a84:
    // 0x1a9a84: 0x8e020024
    ctx->pc = 0x1a9a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a9a88: 0x511021
    ctx->pc = 0x1a9a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a9a8c: 0xae020024
    ctx->pc = 0x1a9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1a9a90: 0x8e82000c
    ctx->pc = 0x1a9a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1a9a94: 0x2421021
    ctx->pc = 0x1a9a94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a9a98: 0xae020074
    ctx->pc = 0x1a9a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1a9a9c: 0x8e020024
    ctx->pc = 0x1a9a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a9aa0: 0x8e050040
    ctx->pc = 0x1a9aa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1a9aa4: 0x8e060044
    ctx->pc = 0x1a9aa4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1a9aa8: 0x21603
    ctx->pc = 0x1a9aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1a9aac: 0xc06a664
    ctx->pc = 0x1A9AACu;
    SET_GPR_U32(ctx, 31, 0x1A9AB4u);
    ctx->pc = 0x1A9AB0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 31));
    ctx->pc = 0x1A9990u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_tex_size_0x1a9990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AB4u; }
        else if (ctx->pc != 0x1A9AB4u) { ctx->pc = 0x1A9AB4u; }
    }
    if (ctx->pc != 0x1A9AB4u) { return; }
    ctx->pc = 0x1A9AB4u;
    // 0x1a9ab4: 0x26100080
    ctx->pc = 0x1a9ab4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a9ab8: 0x26940020
    ctx->pc = 0x1a9ab8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 32));
    // 0x1a9abc: 0x0
    ctx->pc = 0x1a9abcu;
    // NOP
label_1a9ac0:
    // 0x1a9ac0: 0x8e030010
    ctx->pc = 0x1a9ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a9ac4:
    // 0x1a9ac4: 0x2402ffff
    ctx->pc = 0x1a9ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9ac8: 0x1462ffee
    ctx->pc = 0x1A9AC8u;
    {
        const bool branch_taken_0x1a9ac8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a9ac8) {
            ctx->pc = 0x1A9A84u;
            goto label_1a9a84;
        }
    }
    ctx->pc = 0x1A9AD0u;
    // 0x1a9ad0: 0x10000003
    ctx->pc = 0x1A9AD0u;
    {
        const bool branch_taken_0x1a9ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9AD4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
        if (branch_taken_0x1a9ad0) {
            ctx->pc = 0x1A9AE0u;
            goto label_1a9ae0;
        }
    }
    ctx->pc = 0x1A9AD8u;
label_1a9ad8:
    // 0x1a9ad8: 0x70e09e28
    ctx->pc = 0x1a9ad8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1a9adc: 0x3c035000
    ctx->pc = 0x1a9adcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
label_1a9ae0:
    // 0x1a9ae0: 0x3c010030
    ctx->pc = 0x1a9ae0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9ae4: 0xac234070
    ctx->pc = 0x1a9ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16496), GPR_U32(ctx, 3));
    // 0x1a9ae8: 0x26a20010
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a9aec: 0x3c010030
    ctx->pc = 0x1a9aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9af0: 0xac224074
    ctx->pc = 0x1a9af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16500), GPR_U32(ctx, 2));
    // 0x1a9af4: 0x3c010030
    ctx->pc = 0x1a9af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9af8: 0xac204078
    ctx->pc = 0x1a9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16504), GPR_U32(ctx, 0));
    // 0x1a9afc: 0x3c010030
    ctx->pc = 0x1a9afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9b00: 0xac20407c
    ctx->pc = 0x1a9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16508), GPR_U32(ctx, 0));
    // 0x1a9b04: 0x3c047000
    ctx->pc = 0x1a9b04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)28672 << 16));
    // 0x1a9b08: 0x3c010030
    ctx->pc = 0x1a9b08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9b0c: 0xac244080
    ctx->pc = 0x1a9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16512), GPR_U32(ctx, 4));
    // 0x1a9b10: 0x3c010030
    ctx->pc = 0x1a9b10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9b14: 0xac204084
    ctx->pc = 0x1a9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16516), GPR_U32(ctx, 0));
    // 0x1a9b18: 0x3c010030
    ctx->pc = 0x1a9b18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9b1c: 0xac204088
    ctx->pc = 0x1a9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16520), GPR_U32(ctx, 0));
    // 0x1a9b20: 0x3c010030
    ctx->pc = 0x1a9b20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9b24: 0xac20408c
    ctx->pc = 0x1a9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16524), GPR_U32(ctx, 0));
    // 0x1a9b28: 0x8e620080
    ctx->pc = 0x1a9b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1a9b2c: 0x3c036000
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)24576 << 16));
    // 0x1a9b30: 0x441024
    ctx->pc = 0x1a9b30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a9b34: 0x14430004
    ctx->pc = 0x1A9B34u;
    {
        const bool branch_taken_0x1a9b34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A9B38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 128));
        if (branch_taken_0x1a9b34) {
            ctx->pc = 0x1A9B48u;
            goto label_1a9b48;
        }
    }
    ctx->pc = 0x1A9B3Cu;
    // 0x1a9b3c: 0x1000000d
    ctx->pc = 0x1A9B3Cu;
    {
        const bool branch_taken_0x1a9b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9B40u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a9b3c) {
            ctx->pc = 0x1A9B74u;
            goto label_1a9b74;
        }
    }
    ctx->pc = 0x1A9B44u;
    // 0x1a9b44: 0x26620080
    ctx->pc = 0x1a9b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 128));
label_1a9b48:
    // 0x1a9b48: 0xaec20000
    ctx->pc = 0x1a9b48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a9b4c: 0x8e620080
    ctx->pc = 0x1a9b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1a9b50: 0xafa200a0
    ctx->pc = 0x1a9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1a9b54: 0x8e620084
    ctx->pc = 0x1a9b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x1a9b58: 0xafa200b0
    ctx->pc = 0x1a9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1a9b5c: 0x8e7e0088
    ctx->pc = 0x1a9b5cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1a9b60: 0x8e77008c
    ctx->pc = 0x1a9b60u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1a9b64: 0xae630080
    ctx->pc = 0x1a9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
    // 0x1a9b68: 0xae600084
    ctx->pc = 0x1a9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x1a9b6c: 0xae600088
    ctx->pc = 0x1a9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x1a9b70: 0xae60008c
    ctx->pc = 0x1a9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_1a9b74:
    // 0x1a9b74: 0xc0552d8
    ctx->pc = 0x1A9B74u;
    SET_GPR_U32(ctx, 31, 0x1A9B7Cu);
    ctx->pc = 0x1A9B78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B7Cu; }
        else if (ctx->pc != 0x1A9B7Cu) { ctx->pc = 0x1A9B7Cu; }
    }
    if (ctx->pc != 0x1A9B7Cu) { return; }
    ctx->pc = 0x1A9B7Cu;
label_1a9b7c:
    // 0x1a9b7c: 0x3c011001
    ctx->pc = 0x1a9b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a9b80: 0x8c22a000
    ctx->pc = 0x1a9b80u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
    // 0x1a9b84: 0x30420100
    ctx->pc = 0x1a9b84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a9b88: 0x0
    ctx->pc = 0x1a9b88u;
    // NOP
    // 0x1a9b8c: 0x0
    ctx->pc = 0x1a9b8cu;
    // NOP
    // 0x1a9b90: 0x1440fffa
    ctx->pc = 0x1A9B90u;
    {
        const bool branch_taken_0x1a9b90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9b90) {
            ctx->pc = 0x1A9B7Cu;
            goto label_1a9b7c;
        }
    }
    ctx->pc = 0x1A9B98u;
    // 0x1a9b98: 0xc0547e4
    ctx->pc = 0x1A9B98u;
    SET_GPR_U32(ctx, 31, 0x1A9BA0u);
    ctx->pc = 0x1A9B9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BA0u; }
        else if (ctx->pc != 0x1A9BA0u) { ctx->pc = 0x1A9BA0u; }
    }
    if (ctx->pc != 0x1A9BA0u) { return; }
    ctx->pc = 0x1A9BA0u;
    // 0x1a9ba0: 0x70402628
    ctx->pc = 0x1a9ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a9ba4: 0x3c020030
    ctx->pc = 0x1a9ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a9ba8: 0xc0548b8
    ctx->pc = 0x1A9BA8u;
    SET_GPR_U32(ctx, 31, 0x1A9BB0u);
    ctx->pc = 0x1A9BACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16496));
    ctx->pc = 0x1522E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x1522e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BB0u; }
        else if (ctx->pc != 0x1A9BB0u) { ctx->pc = 0x1A9BB0u; }
    }
    if (ctx->pc != 0x1A9BB0u) { return; }
    ctx->pc = 0x1A9BB0u;
    // 0x1a9bb0: 0x8ec20000
    ctx->pc = 0x1a9bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a9bb4: 0x10400007
    ctx->pc = 0x1A9BB4u;
    {
        const bool branch_taken_0x1a9bb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9bb4) {
            ctx->pc = 0x1A9BD4u;
            goto label_1a9bd4;
        }
    }
    ctx->pc = 0x1A9BBCu;
    // 0x1a9bbc: 0x8fa200a0
    ctx->pc = 0x1a9bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a9bc0: 0xae620080
    ctx->pc = 0x1a9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    // 0x1a9bc4: 0x8fa200b0
    ctx->pc = 0x1a9bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a9bc8: 0xae620084
    ctx->pc = 0x1a9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
    // 0x1a9bcc: 0xae7e0088
    ctx->pc = 0x1a9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 30));
    // 0x1a9bd0: 0xae77008c
    ctx->pc = 0x1a9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 23));
label_1a9bd4:
    // 0x1a9bd4: 0x7bbf0090
    ctx->pc = 0x1a9bd4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a9bd8: 0x7bbe0080
    ctx->pc = 0x1a9bd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a9bdc: 0x7bb70070
    ctx->pc = 0x1a9bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9be0: 0x7bb60060
    ctx->pc = 0x1a9be0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a9be4: 0x7bb50050
    ctx->pc = 0x1a9be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9be8: 0x7bb40040
    ctx->pc = 0x1a9be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9bec: 0x7bb30030
    ctx->pc = 0x1a9becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9bf0: 0x7bb20020
    ctx->pc = 0x1a9bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9bf4: 0x7bb10010
    ctx->pc = 0x1a9bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9bf8: 0x7bb00000
    ctx->pc = 0x1a9bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9bfc: 0x70001628
    ctx->pc = 0x1a9bfcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9c00: 0x3e00008
    ctx->pc = 0x1A9C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9A84u: goto label_1a9a84;
            case 0x1A9AC0u: goto label_1a9ac0;
            case 0x1A9AC4u: goto label_1a9ac4;
            case 0x1A9AD8u: goto label_1a9ad8;
            case 0x1A9AE0u: goto label_1a9ae0;
            case 0x1A9B48u: goto label_1a9b48;
            case 0x1A9B74u: goto label_1a9b74;
            case 0x1A9B7Cu: goto label_1a9b7c;
            case 0x1A9BD4u: goto label_1a9bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9C08u;
}
