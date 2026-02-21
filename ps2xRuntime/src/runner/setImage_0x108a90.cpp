#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setImage
// Address: 0x108a90 - 0x108b84
void setImage_0x108a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108a90u;

    // 0x108a90: 0x27bdff60
    ctx->pc = 0x108a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x108a94: 0xffb00000
    ctx->pc = 0x108a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108a98: 0xffbe0080
    ctx->pc = 0x108a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x108a9c: 0xa0802d
    ctx->pc = 0x108a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108aa0: 0xffb70070
    ctx->pc = 0x108aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x108aa4: 0x3202003f
    ctx->pc = 0x108aa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 63));
    // 0x108aa8: 0xffb60060
    ctx->pc = 0x108aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x108aac: 0x160b82d
    ctx->pc = 0x108aacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ab0: 0xffb50050
    ctx->pc = 0x108ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108ab4: 0x140b02d
    ctx->pc = 0x108ab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ab8: 0xffb40040
    ctx->pc = 0x108ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108abc: 0x120a82d
    ctx->pc = 0x108abcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ac0: 0xffb30030
    ctx->pc = 0x108ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108ac4: 0x100a02d
    ctx->pc = 0x108ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ac8: 0xffb20020
    ctx->pc = 0x108ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108acc: 0xe0982d
    ctx->pc = 0x108accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad0: 0xffb10010
    ctx->pc = 0x108ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108ad4: 0xc0902d
    ctx->pc = 0x108ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ad8: 0xffbf0090
    ctx->pc = 0x108ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x108adc: 0x80882d
    ctx->pc = 0x108adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ae0: 0x10400004
    ctx->pc = 0x108AE0u;
    {
        const bool branch_taken_0x108ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108AE4u;
        SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
        if (branch_taken_0x108ae0) {
            ctx->pc = 0x108AF4u;
            goto label_108af4;
        }
    }
    ctx->pc = 0x108AE8u;
    // 0x108ae8: 0x3c040017
    ctx->pc = 0x108ae8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108aec: 0xc04ace4
    ctx->pc = 0x108AECu;
    SET_GPR_U32(ctx, 31, 0x108AF4u);
    ctx->pc = 0x108AF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12152));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AF4u; }
    }
    if (ctx->pc != 0x108AF4u) { return; }
    ctx->pc = 0x108AF4u;
label_108af4:
    // 0x108af4: 0x24040044
    ctx->pc = 0x108af4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 68));
    // 0x108af8: 0x3c030014
    ctx->pc = 0x108af8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20 << 16));
    // 0x108afc: 0x2242018
    ctx->pc = 0x108afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x108b00: 0x24631698
    ctx->pc = 0x108b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5784));
    // 0x108b04: 0x3c013f80
    ctx->pc = 0x108b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x108b08: 0x44810000
    ctx->pc = 0x108b08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x108b0c: 0xdfbf0090
    ctx->pc = 0x108b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108b10: 0xdfb10010
    ctx->pc = 0x108b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b14: 0x834021
    ctx->pc = 0x108b14u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x108b18: 0x641021
    ctx->pc = 0x108b18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x108b1c: 0xad100000
    ctx->pc = 0x108b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
    // 0x108b20: 0x40282d
    ctx->pc = 0x108b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b24: 0xac520004
    ctx->pc = 0x108b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x108b28: 0x40302d
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b2c: 0xacb30008
    ctx->pc = 0x108b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 19));
    // 0x108b30: 0x40382d
    ctx->pc = 0x108b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b34: 0xacd4000c
    ctx->pc = 0x108b34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 20));
    // 0x108b38: 0xa0182d
    ctx->pc = 0x108b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b3c: 0xac550010
    ctx->pc = 0x108b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 21));
    // 0x108b40: 0xacb60014
    ctx->pc = 0x108b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x108b44: 0xacd70018
    ctx->pc = 0x108b44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 23));
    // 0x108b48: 0xdfb70070
    ctx->pc = 0x108b48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108b4c: 0x8fa200a0
    ctx->pc = 0x108b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x108b50: 0xdfb60060
    ctx->pc = 0x108b50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108b54: 0xace2001c
    ctx->pc = 0x108b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x108b58: 0xa11e0028
    ctx->pc = 0x108b58u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 40), (uint8_t)GPR_U32(ctx, 30));
    // 0x108b5c: 0xe4a00020
    ctx->pc = 0x108b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x108b60: 0xdfbe0080
    ctx->pc = 0x108b60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108b64: 0xdfb50050
    ctx->pc = 0x108b64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108b68: 0xdfb40040
    ctx->pc = 0x108b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108b6c: 0xdfb30030
    ctx->pc = 0x108b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108b70: 0xdfb20020
    ctx->pc = 0x108b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b74: 0xdfb00000
    ctx->pc = 0x108b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b78: 0xe4600024
    ctx->pc = 0x108b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x108b7c: 0x3e00008
    ctx->pc = 0x108B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108AF4u: goto label_108af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108B84u;
}
