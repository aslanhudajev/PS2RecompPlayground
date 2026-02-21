#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_wsel_pos
// Address: 0x26e568 - 0x26e6c8
void calc_wsel_pos_0x26e568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26e568u;

    // 0x26e568: 0x27bdffc0
    ctx->pc = 0x26e568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26e56c: 0xffbf0020
    ctx->pc = 0x26e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26e570: 0xffb00010
    ctx->pc = 0x26e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26e574: 0xe7b50038
    ctx->pc = 0x26e574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26e578: 0xe7b40030
    ctx->pc = 0x26e578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26e57c: 0x3c020034
    ctx->pc = 0x26e57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26e580: 0x2450eb60
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26e584: 0xc61400b4
    ctx->pc = 0x26e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e588: 0xc0b9e4a
    ctx->pc = 0x26E588u;
    SET_GPR_U32(ctx, 31, 0x26E590u);
    ctx->pc = 0x26E58Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E590u; }
    }
    if (ctx->pc != 0x26E590u) { return; }
    ctx->pc = 0x26E590u;
    // 0x26e590: 0x46000546
    ctx->pc = 0x26e590u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26e594: 0xc0b9dce
    ctx->pc = 0x26E594u;
    SET_GPR_U32(ctx, 31, 0x26E59Cu);
    ctx->pc = 0x26E598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E59Cu; }
    }
    if (ctx->pc != 0x26E59Cu) { return; }
    ctx->pc = 0x26E59Cu;
    // 0x26e59c: 0x46000506
    ctx->pc = 0x26e59cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26e5a0: 0x3c02003c
    ctx->pc = 0x26e5a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26e5a4: 0x24433988
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14728));
    // 0x26e5a8: 0xc4443988
    ctx->pc = 0x26e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26e5ac: 0x4604a902
    ctx->pc = 0x26e5acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x26e5b0: 0xe6040070
    ctx->pc = 0x26e5b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26e5b4: 0xc4630004
    ctx->pc = 0x26e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e5b8: 0xe6030074
    ctx->pc = 0x26e5b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26e5bc: 0xc4620008
    ctx->pc = 0x26e5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e5c0: 0x4602a082
    ctx->pc = 0x26e5c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x26e5c4: 0xe6020078
    ctx->pc = 0x26e5c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26e5c8: 0x3c02003c
    ctx->pc = 0x26e5c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26e5cc: 0x24433998
    ctx->pc = 0x26e5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 14744));
    // 0x26e5d0: 0xc4413998
    ctx->pc = 0x26e5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e5d4: 0x4601a842
    ctx->pc = 0x26e5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26e5d8: 0xe6010140
    ctx->pc = 0x26e5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26e5dc: 0xc4650004
    ctx->pc = 0x26e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26e5e0: 0xe6050144
    ctx->pc = 0x26e5e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26e5e4: 0xc4600008
    ctx->pc = 0x26e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e5e8: 0x4600a002
    ctx->pc = 0x26e5e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x26e5ec: 0xe6000148
    ctx->pc = 0x26e5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x26e5f0: 0x46012101
    ctx->pc = 0x26e5f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x26e5f4: 0xe7a40000
    ctx->pc = 0x26e5f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26e5f8: 0x460518c1
    ctx->pc = 0x26e5f8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x26e5fc: 0xe7a30004
    ctx->pc = 0x26e5fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26e600: 0x46001081
    ctx->pc = 0x26e600u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26e604: 0xe7a20008
    ctx->pc = 0x26e604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26e608: 0x46042002
    ctx->pc = 0x26e608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x26e60c: 0x460318c2
    ctx->pc = 0x26e60cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x26e610: 0x46030000
    ctx->pc = 0x26e610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26e614: 0x46021082
    ctx->pc = 0x26e614u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26e618: 0x46020000
    ctx->pc = 0x26e618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26e61c: 0x0
    ctx->pc = 0x26e61cu;
    // NOP
    // 0x26e620: 0x0
    ctx->pc = 0x26e620u;
    // NOP
    // 0x26e624: 0x46000004
    ctx->pc = 0x26e624u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26e628: 0x46000032
    ctx->pc = 0x26e628u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e62c: 0x0
    ctx->pc = 0x26e62cu;
    // NOP
    // 0x26e630: 0x45030006
    ctx->pc = 0x26E630u;
    {
        const bool branch_taken_0x26e630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e630) {
            ctx->pc = 0x26E634u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
            ctx->pc = 0x26E64Cu;
            goto label_26e64c;
        }
    }
    ctx->pc = 0x26E638u;
    // 0x26e638: 0x46042302
    ctx->pc = 0x26e638u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x26e63c: 0x46036300
    ctx->pc = 0x26e63cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x26e640: 0xc0ba284
    ctx->pc = 0x26E640u;
    SET_GPR_U32(ctx, 31, 0x26E648u);
    ctx->pc = 0x26E644u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E648u; }
    }
    if (ctx->pc != 0x26E648u) { return; }
    ctx->pc = 0x26E648u;
    // 0x26e648: 0xe60000d0
    ctx->pc = 0x26e648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_26e64c:
    // 0x26e64c: 0xc60100f0
    ctx->pc = 0x26e64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e650: 0x4601a882
    ctx->pc = 0x26e650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x26e654: 0xe7a20000
    ctx->pc = 0x26e654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26e658: 0xafa00004
    ctx->pc = 0x26e658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26e65c: 0x4601a042
    ctx->pc = 0x26e65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x26e660: 0xe7a10008
    ctx->pc = 0x26e660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26e664: 0xc6000070
    ctx->pc = 0x26e664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e668: 0x46020000
    ctx->pc = 0x26e668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26e66c: 0xe6000070
    ctx->pc = 0x26e66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26e670: 0xc6000074
    ctx->pc = 0x26e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e674: 0xc7a30004
    ctx->pc = 0x26e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26e678: 0x46030000
    ctx->pc = 0x26e678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26e67c: 0xe6000074
    ctx->pc = 0x26e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26e680: 0xc6000078
    ctx->pc = 0x26e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e684: 0x46010000
    ctx->pc = 0x26e684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e688: 0xe6000078
    ctx->pc = 0x26e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26e68c: 0xc6000140
    ctx->pc = 0x26e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e690: 0x46020000
    ctx->pc = 0x26e690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26e694: 0xe6000140
    ctx->pc = 0x26e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26e698: 0xc6000144
    ctx->pc = 0x26e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e69c: 0x46030000
    ctx->pc = 0x26e69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x26e6a0: 0xe6000144
    ctx->pc = 0x26e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26e6a4: 0xc6000148
    ctx->pc = 0x26e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e6a8: 0x46010000
    ctx->pc = 0x26e6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e6ac: 0xe6000148
    ctx->pc = 0x26e6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x26e6b0: 0xdfbf0020
    ctx->pc = 0x26e6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e6b4: 0xdfb00010
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e6b8: 0xc7b50038
    ctx->pc = 0x26e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26e6bc: 0xc7b40030
    ctx->pc = 0x26e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e6c0: 0x3e00008
    ctx->pc = 0x26E6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E6C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E64Cu: goto label_26e64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E6C8u;
}
