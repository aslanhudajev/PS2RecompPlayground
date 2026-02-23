#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcCamera__22CameraMgrInternalClassFv
// Address: 0x1c9ba0 - 0x1c9df0
void calcCamera__22CameraMgrInternalClassFv_0x1c9ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcCamera__22CameraMgrInternalClassFv");


    ctx->pc = 0x1c9ba0u;

    // 0x1c9ba0: 0x27bdff80
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c9ba4: 0x7fbf0030
    ctx->pc = 0x1c9ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1c9ba8: 0x7fb20020
    ctx->pc = 0x1c9ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c9bac: 0x7fb10010
    ctx->pc = 0x1c9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9bb0: 0x7fb00000
    ctx->pc = 0x1c9bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9bb4: 0x70809628
    ctx->pc = 0x1c9bb4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c9bb8: 0x70008628
    ctx->pc = 0x1c9bb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c9bbc: 0x70008e28
    ctx->pc = 0x1c9bbcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c9bc0:
    // 0x1c9bc0: 0x8f828c48
    ctx->pc = 0x1c9bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9bc4: 0x8c420004
    ctx->pc = 0x1c9bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c9bc8: 0x1602003f
    ctx->pc = 0x1C9BC8u;
    {
        const bool branch_taken_0x1c9bc8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x1c9bc8) {
            ctx->pc = 0x1C9CC8u;
            goto label_1c9cc8;
        }
    }
    ctx->pc = 0x1C9BD0u;
    // 0x1c9bd0: 0xc06c20d
    ctx->pc = 0x1C9BD0u;
    SET_GPR_U32(ctx, 31, 0x1C9BD8u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9BD8u; }
        else if (ctx->pc != 0x1C9BD8u) { ctx->pc = 0x1C9BD8u; }
    }
    if (ctx->pc != 0x1C9BD8u) { return; }
    ctx->pc = 0x1C9BD8u;
    // 0x1c9bd8: 0x8f848c48
    ctx->pc = 0x1c9bd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9bdc: 0x8c830004
    ctx->pc = 0x1c9bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c9be0: 0x31040
    ctx->pc = 0x1c9be0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c9be4: 0x431021
    ctx->pc = 0x1c9be4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9be8: 0x21080
    ctx->pc = 0x1c9be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9bec: 0x431021
    ctx->pc = 0x1c9becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9bf0: 0x21100
    ctx->pc = 0x1c9bf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9bf4: 0x821021
    ctx->pc = 0x1c9bf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c9bf8: 0xc44d0094
    ctx->pc = 0x1c9bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9bfc: 0xc44e0098
    ctx->pc = 0x1c9bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9c00: 0xc06c202
    ctx->pc = 0x1C9C00u;
    SET_GPR_U32(ctx, 31, 0x1C9C08u);
    ctx->pc = 0x1C9C04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C08u; }
        else if (ctx->pc != 0x1C9C08u) { ctx->pc = 0x1C9C08u; }
    }
    if (ctx->pc != 0x1C9C08u) { return; }
    ctx->pc = 0x1C9C08u;
    // 0x1c9c08: 0x8f848c48
    ctx->pc = 0x1c9c08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9c0c: 0x8c830004
    ctx->pc = 0x1c9c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c9c10: 0x31040
    ctx->pc = 0x1c9c10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c9c14: 0x431021
    ctx->pc = 0x1c9c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9c18: 0x21080
    ctx->pc = 0x1c9c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9c1c: 0x431021
    ctx->pc = 0x1c9c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9c20: 0x21100
    ctx->pc = 0x1c9c20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9c24: 0x821021
    ctx->pc = 0x1c9c24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c9c28: 0xc06c0fb
    ctx->pc = 0x1C9C28u;
    SET_GPR_U32(ctx, 31, 0x1C9C30u);
    ctx->pc = 0x1C9C2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C30u; }
        else if (ctx->pc != 0x1C9C30u) { ctx->pc = 0x1C9C30u; }
    }
    if (ctx->pc != 0x1C9C30u) { return; }
    ctx->pc = 0x1C9C30u;
    // 0x1c9c30: 0x8f848c48
    ctx->pc = 0x1c9c30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9c34: 0x8c830004
    ctx->pc = 0x1c9c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c9c38: 0x31040
    ctx->pc = 0x1c9c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c9c3c: 0x431021
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9c40: 0x21080
    ctx->pc = 0x1c9c40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9c44: 0x431021
    ctx->pc = 0x1c9c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9c48: 0x21100
    ctx->pc = 0x1c9c48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9c4c: 0x821021
    ctx->pc = 0x1c9c4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c9c50: 0xc06c09f
    ctx->pc = 0x1C9C50u;
    SET_GPR_U32(ctx, 31, 0x1C9C58u);
    ctx->pc = 0x1C9C54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 156)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C58u; }
        else if (ctx->pc != 0x1C9C58u) { ctx->pc = 0x1C9C58u; }
    }
    if (ctx->pc != 0x1C9C58u) { return; }
    ctx->pc = 0x1C9C58u;
    // 0x1c9c58: 0xc7808b7c
    ctx->pc = 0x1c9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c5c: 0xafa00060
    ctx->pc = 0x1c9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1c9c60: 0x3c02c47a
    ctx->pc = 0x1c9c60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50298 << 16));
    // 0x1c9c64: 0x27a40060
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9c68: 0x27a50070
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c9c6c: 0x46800020
    ctx->pc = 0x1c9c6cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1c9c70: 0xe7a00064
    ctx->pc = 0x1c9c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c9c74: 0xc06bf00
    ctx->pc = 0x1C9C74u;
    SET_GPR_U32(ctx, 31, 0x1C9C7Cu);
    ctx->pc = 0x1C9C78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C7Cu; }
        else if (ctx->pc != 0x1C9C7Cu) { ctx->pc = 0x1C9C7Cu; }
    }
    if (ctx->pc != 0x1C9C7Cu) { return; }
    ctx->pc = 0x1C9C7Cu;
    // 0x1c9c7c: 0xc7a20070
    ctx->pc = 0x1c9c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9c80: 0xc7a10074
    ctx->pc = 0x1c9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c84: 0xc7a00078
    ctx->pc = 0x1c9c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c88: 0x8f858c48
    ctx->pc = 0x1c9c88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9c8c: 0x72402628
    ctx->pc = 0x1c9c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1c9c90: 0x27a60040
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c9c94: 0xe7a20040
    ctx->pc = 0x1c9c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c9c98: 0xe7a10044
    ctx->pc = 0x1c9c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1c9c9c: 0xe7a00048
    ctx->pc = 0x1c9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c9ca0: 0x8ca30004
    ctx->pc = 0x1c9ca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9ca4: 0x31040
    ctx->pc = 0x1c9ca4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c9ca8: 0x431021
    ctx->pc = 0x1c9ca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9cac: 0x21080
    ctx->pc = 0x1c9cacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9cb0: 0x431021
    ctx->pc = 0x1c9cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9cb4: 0x21100
    ctx->pc = 0x1c9cb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9cb8: 0xa21021
    ctx->pc = 0x1c9cb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9cbc: 0x8c4700a4
    ctx->pc = 0x1c9cbcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c9cc0: 0xc0727a0
    ctx->pc = 0x1C9CC0u;
    SET_GPR_U32(ctx, 31, 0x1C9CC8u);
    ctx->pc = 0x1C9CC4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 144));
    ctx->pc = 0x1C9E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi_0x1c9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CC8u; }
        else if (ctx->pc != 0x1C9CC8u) { ctx->pc = 0x1C9CC8u; }
    }
    if (ctx->pc != 0x1C9CC8u) { return; }
    ctx->pc = 0x1C9CC8u;
label_1c9cc8:
    // 0x1c9cc8: 0xc06c20d
    ctx->pc = 0x1C9CC8u;
    SET_GPR_U32(ctx, 31, 0x1C9CD0u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CD0u; }
        else if (ctx->pc != 0x1C9CD0u) { ctx->pc = 0x1C9CD0u; }
    }
    if (ctx->pc != 0x1C9CD0u) { return; }
    ctx->pc = 0x1C9CD0u;
    // 0x1c9cd0: 0x8f828c48
    ctx->pc = 0x1c9cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9cd4: 0x511021
    ctx->pc = 0x1c9cd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9cd8: 0xc44d0094
    ctx->pc = 0x1c9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9cdc: 0xc44e0098
    ctx->pc = 0x1c9cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9ce0: 0xc06c202
    ctx->pc = 0x1C9CE0u;
    SET_GPR_U32(ctx, 31, 0x1C9CE8u);
    ctx->pc = 0x1C9CE4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CE8u; }
        else if (ctx->pc != 0x1C9CE8u) { ctx->pc = 0x1C9CE8u; }
    }
    if (ctx->pc != 0x1C9CE8u) { return; }
    ctx->pc = 0x1C9CE8u;
    // 0x1c9ce8: 0x8f828c48
    ctx->pc = 0x1c9ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9cec: 0x511021
    ctx->pc = 0x1c9cecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9cf0: 0xc06c0fb
    ctx->pc = 0x1C9CF0u;
    SET_GPR_U32(ctx, 31, 0x1C9CF8u);
    ctx->pc = 0x1C9CF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CF8u; }
        else if (ctx->pc != 0x1C9CF8u) { ctx->pc = 0x1C9CF8u; }
    }
    if (ctx->pc != 0x1C9CF8u) { return; }
    ctx->pc = 0x1C9CF8u;
    // 0x1c9cf8: 0x8f828c48
    ctx->pc = 0x1c9cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9cfc: 0x511021
    ctx->pc = 0x1c9cfcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d00: 0xc06c09f
    ctx->pc = 0x1C9D00u;
    SET_GPR_U32(ctx, 31, 0x1C9D08u);
    ctx->pc = 0x1C9D04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 156)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D08u; }
        else if (ctx->pc != 0x1C9D08u) { ctx->pc = 0x1C9D08u; }
    }
    if (ctx->pc != 0x1C9D08u) { return; }
    ctx->pc = 0x1C9D08u;
    // 0x1c9d08: 0x8f828c48
    ctx->pc = 0x1c9d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d0c: 0x511021
    ctx->pc = 0x1c9d0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d10: 0xc06c157
    ctx->pc = 0x1C9D10u;
    SET_GPR_U32(ctx, 31, 0x1C9D18u);
    ctx->pc = 0x1C9D14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D18u; }
        else if (ctx->pc != 0x1C9D18u) { ctx->pc = 0x1C9D18u; }
    }
    if (ctx->pc != 0x1C9D18u) { return; }
    ctx->pc = 0x1C9D18u;
    // 0x1c9d18: 0x8f828c48
    ctx->pc = 0x1c9d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d1c: 0x511021
    ctx->pc = 0x1c9d1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d20: 0xc06bf55
    ctx->pc = 0x1C9D20u;
    SET_GPR_U32(ctx, 31, 0x1C9D28u);
    ctx->pc = 0x1C9D24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D28u; }
        else if (ctx->pc != 0x1C9D28u) { ctx->pc = 0x1C9D28u; }
    }
    if (ctx->pc != 0x1C9D28u) { return; }
    ctx->pc = 0x1C9D28u;
    // 0x1c9d28: 0xc06c20d
    ctx->pc = 0x1C9D28u;
    SET_GPR_U32(ctx, 31, 0x1C9D30u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D30u; }
        else if (ctx->pc != 0x1C9D30u) { ctx->pc = 0x1C9D30u; }
    }
    if (ctx->pc != 0x1C9D30u) { return; }
    ctx->pc = 0x1C9D30u;
    // 0x1c9d30: 0x8f828c48
    ctx->pc = 0x1c9d30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d34: 0x511021
    ctx->pc = 0x1c9d34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d38: 0x8c4200a4
    ctx->pc = 0x1c9d38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1c9d3c: 0xc06c157
    ctx->pc = 0x1C9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D44u);
    ctx->pc = 0x1C9D40u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D44u; }
        else if (ctx->pc != 0x1C9D44u) { ctx->pc = 0x1C9D44u; }
    }
    if (ctx->pc != 0x1C9D44u) { return; }
    ctx->pc = 0x1C9D44u;
    // 0x1c9d44: 0x8f828c48
    ctx->pc = 0x1c9d44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d48: 0x511021
    ctx->pc = 0x1c9d48u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d4c: 0x8c42009c
    ctx->pc = 0x1c9d4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1c9d50: 0xc06c09f
    ctx->pc = 0x1C9D50u;
    SET_GPR_U32(ctx, 31, 0x1C9D58u);
    ctx->pc = 0x1C9D54u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D58u; }
        else if (ctx->pc != 0x1C9D58u) { ctx->pc = 0x1C9D58u; }
    }
    if (ctx->pc != 0x1C9D58u) { return; }
    ctx->pc = 0x1C9D58u;
    // 0x1c9d58: 0x8f828c48
    ctx->pc = 0x1c9d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d5c: 0x511021
    ctx->pc = 0x1c9d5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d60: 0x8c4200a0
    ctx->pc = 0x1c9d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1c9d64: 0xc06c0fb
    ctx->pc = 0x1C9D64u;
    SET_GPR_U32(ctx, 31, 0x1C9D6Cu);
    ctx->pc = 0x1C9D68u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D6Cu; }
        else if (ctx->pc != 0x1C9D6Cu) { ctx->pc = 0x1C9D6Cu; }
    }
    if (ctx->pc != 0x1C9D6Cu) { return; }
    ctx->pc = 0x1C9D6Cu;
    // 0x1c9d6c: 0x8f828c48
    ctx->pc = 0x1c9d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d70: 0x511021
    ctx->pc = 0x1c9d70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d74: 0xc4420090
    ctx->pc = 0x1c9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9d78: 0xc4410094
    ctx->pc = 0x1c9d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9d7c: 0xc4400098
    ctx->pc = 0x1c9d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9d80: 0x46001307
    ctx->pc = 0x1c9d80u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x1c9d84: 0x46000b47
    ctx->pc = 0x1c9d84u;
    ctx->f[13] = FPU_NEG_S(ctx->f[1]);
    // 0x1c9d88: 0xc06c202
    ctx->pc = 0x1C9D88u;
    SET_GPR_U32(ctx, 31, 0x1C9D90u);
    ctx->pc = 0x1C9D8Cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9D90u; }
        else if (ctx->pc != 0x1C9D90u) { ctx->pc = 0x1C9D90u; }
    }
    if (ctx->pc != 0x1C9D90u) { return; }
    ctx->pc = 0x1C9D90u;
    // 0x1c9d90: 0x8f828c48
    ctx->pc = 0x1c9d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9d94: 0x511021
    ctx->pc = 0x1c9d94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c9d98: 0xc06bf55
    ctx->pc = 0x1C9D98u;
    SET_GPR_U32(ctx, 31, 0x1C9DA0u);
    ctx->pc = 0x1C9D9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DA0u; }
        else if (ctx->pc != 0x1C9DA0u) { ctx->pc = 0x1C9DA0u; }
    }
    if (ctx->pc != 0x1C9DA0u) { return; }
    ctx->pc = 0x1C9DA0u;
    // 0x1c9da0: 0x26100001
    ctx->pc = 0x1c9da0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c9da4: 0x2a020004
    ctx->pc = 0x1c9da4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x1c9da8: 0x1440ff85
    ctx->pc = 0x1C9DA8u;
    {
        const bool branch_taken_0x1c9da8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C9DACu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 208));
        if (branch_taken_0x1c9da8) {
            ctx->pc = 0x1C9BC0u;
            goto label_1c9bc0;
        }
    }
    ctx->pc = 0x1C9DB0u;
    // 0x1c9db0: 0x8f848c48
    ctx->pc = 0x1c9db0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9db4: 0x8c830004
    ctx->pc = 0x1c9db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c9db8: 0x31040
    ctx->pc = 0x1c9db8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c9dbc: 0x431021
    ctx->pc = 0x1c9dbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9dc0: 0x21080
    ctx->pc = 0x1c9dc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9dc4: 0x431021
    ctx->pc = 0x1c9dc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9dc8: 0x21100
    ctx->pc = 0x1c9dc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c9dcc: 0x821021
    ctx->pc = 0x1c9dccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c9dd0: 0xc06c038
    ctx->pc = 0x1C9DD0u;
    SET_GPR_U32(ctx, 31, 0x1C9DD8u);
    ctx->pc = 0x1C9DD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9DD8u; }
        else if (ctx->pc != 0x1C9DD8u) { ctx->pc = 0x1C9DD8u; }
    }
    if (ctx->pc != 0x1C9DD8u) { return; }
    ctx->pc = 0x1C9DD8u;
    // 0x1c9dd8: 0x7bbf0030
    ctx->pc = 0x1c9dd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9ddc: 0x7bb20020
    ctx->pc = 0x1c9ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9de0: 0x7bb10010
    ctx->pc = 0x1c9de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9de4: 0x7bb00000
    ctx->pc = 0x1c9de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9de8: 0x3e00008
    ctx->pc = 0x1C9DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9DECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9BC0u: goto label_1c9bc0;
            case 0x1C9CC8u: goto label_1c9cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9DF0u;
}
