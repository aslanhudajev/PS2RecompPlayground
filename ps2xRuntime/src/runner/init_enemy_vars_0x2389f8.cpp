#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_enemy_vars
// Address: 0x2389f8 - 0x238ca8
void init_enemy_vars_0x2389f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2389f8u;

    // 0x2389f8: 0x27bdffb0
    ctx->pc = 0x2389f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2389fc: 0xffbf0040
    ctx->pc = 0x2389fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x238a00: 0xffb30030
    ctx->pc = 0x238a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x238a04: 0xffb20020
    ctx->pc = 0x238a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x238a08: 0xffb10010
    ctx->pc = 0x238a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x238a0c: 0xffb00000
    ctx->pc = 0x238a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238a10: 0x80982d
    ctx->pc = 0x238a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a14: 0xa0902d
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a18: 0x240303b0
    ctx->pc = 0x238a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x238a1c: 0x2631818
    ctx->pc = 0x238a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x238a20: 0x3c020033
    ctx->pc = 0x238a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238a24: 0x2442dfd0
    ctx->pc = 0x238a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x238a28: 0x628821
    ctx->pc = 0x238a28u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238a2c: 0xae2001f8
    ctx->pc = 0x238a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x238a30: 0x2404ffff
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238a34: 0xae24034c
    ctx->pc = 0x238a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 4));
    // 0x238a38: 0xae240348
    ctx->pc = 0x238a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 4));
    // 0x238a3c: 0xae2000e0
    ctx->pc = 0x238a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x238a40: 0xae20021c
    ctx->pc = 0x238a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x238a44: 0xae200220
    ctx->pc = 0x238a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x238a48: 0xa624028a
    ctx->pc = 0x238a48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 650), (uint16_t)GPR_U32(ctx, 4));
    // 0x238a4c: 0xa6240288
    ctx->pc = 0x238a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 648), (uint16_t)GPR_U32(ctx, 4));
    // 0x238a50: 0x3c020034
    ctx->pc = 0x238a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x238a54: 0x8c42e7c8
    ctx->pc = 0x238a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x238a58: 0xc44000b4
    ctx->pc = 0x238a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238a5c: 0x3c0141f0
    ctx->pc = 0x238a5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x238a60: 0x44810800
    ctx->pc = 0x238a60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x238a64: 0x46010002
    ctx->pc = 0x238a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x238a68: 0xe6200314
    ctx->pc = 0x238a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 788), bits); }
    // 0x238a6c: 0x3c013f80
    ctx->pc = 0x238a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x238a70: 0x44810000
    ctx->pc = 0x238a70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238a74: 0xe620028c
    ctx->pc = 0x238a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 652), bits); }
    // 0x238a78: 0xe6200290
    ctx->pc = 0x238a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 656), bits); }
    // 0x238a7c: 0x3c020033
    ctx->pc = 0x238a7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238a80: 0x2442d528
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956328));
    // 0x238a84: 0x8e230000
    ctx->pc = 0x238a84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238a88: 0x31880
    ctx->pc = 0x238a88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x238a8c: 0x621021
    ctx->pc = 0x238a8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238a90: 0xc4400000
    ctx->pc = 0x238a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238a94: 0x3c013f00
    ctx->pc = 0x238a94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x238a98: 0x44810800
    ctx->pc = 0x238a98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x238a9c: 0x46010002
    ctx->pc = 0x238a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x238aa0: 0xe6200250
    ctx->pc = 0x238aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x238aa4: 0x3c020033
    ctx->pc = 0x238aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238aa8: 0x2442d5b0
    ctx->pc = 0x238aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956464));
    // 0x238aac: 0x621821
    ctx->pc = 0x238aacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238ab0: 0xc4600000
    ctx->pc = 0x238ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238ab4: 0xe620024c
    ctx->pc = 0x238ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x238ab8: 0xa6200212
    ctx->pc = 0x238ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 530), (uint16_t)GPR_U32(ctx, 0));
    // 0x238abc: 0xae240298
    ctx->pc = 0x238abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 4));
    // 0x238ac0: 0xae24029c
    ctx->pc = 0x238ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 4));
    // 0x238ac4: 0xae2002a0
    ctx->pc = 0x238ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 0));
    // 0x238ac8: 0xae2002ac
    ctx->pc = 0x238ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
    // 0x238acc: 0xae200370
    ctx->pc = 0x238accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 0));
    // 0x238ad0: 0xa6200294
    ctx->pc = 0x238ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 660), (uint16_t)GPR_U32(ctx, 0));
    // 0x238ad4: 0xa6200296
    ctx->pc = 0x238ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 662), (uint16_t)GPR_U32(ctx, 0));
    // 0x238ad8: 0xa62402e0
    ctx->pc = 0x238ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 736), (uint16_t)GPR_U32(ctx, 4));
    // 0x238adc: 0xa62002e2
    ctx->pc = 0x238adcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 738), (uint16_t)GPR_U32(ctx, 0));
    // 0x238ae0: 0xae2002e4
    ctx->pc = 0x238ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 0));
    // 0x238ae4: 0xae2002b4
    ctx->pc = 0x238ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x238ae8: 0xae2002b8
    ctx->pc = 0x238ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
    // 0x238aec: 0x182d
    ctx->pc = 0x238aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238af0: 0x262402c8
    ctx->pc = 0x238af0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 712));
    // 0x238af4: 0x0
    ctx->pc = 0x238af4u;
    // NOP
label_238af8:
    // 0x238af8: 0x31080
    ctx->pc = 0x238af8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x238afc: 0x821021
    ctx->pc = 0x238afcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238b00: 0xac400000
    ctx->pc = 0x238b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x238b04: 0x24630001
    ctx->pc = 0x238b04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x238b08: 0x28620005
    ctx->pc = 0x238b08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5));
    // 0x238b0c: 0x1440fffa
    ctx->pc = 0x238B0Cu;
    {
        const bool branch_taken_0x238b0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x238b0c) {
            ctx->pc = 0x238AF8u;
            goto label_238af8;
        }
    }
    ctx->pc = 0x238B14u;
    // 0x238b14: 0xae2002bc
    ctx->pc = 0x238b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 0));
    // 0x238b18: 0xae2002c0
    ctx->pc = 0x238b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 0));
    // 0x238b1c: 0xae2002c4
    ctx->pc = 0x238b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x238b20: 0xae200270
    ctx->pc = 0x238b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x238b24: 0xae200274
    ctx->pc = 0x238b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x238b28: 0xae200278
    ctx->pc = 0x238b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
    // 0x238b2c: 0xae20027c
    ctx->pc = 0x238b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x238b30: 0xae200284
    ctx->pc = 0x238b30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
    // 0x238b34: 0xae2002a4
    ctx->pc = 0x238b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x238b38: 0x2410ffff
    ctx->pc = 0x238b38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238b3c: 0xae3003a4
    ctx->pc = 0x238b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 932), GPR_U32(ctx, 16));
    // 0x238b40: 0x3c013f80
    ctx->pc = 0x238b40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x238b44: 0x44810000
    ctx->pc = 0x238b44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238b48: 0xe620038c
    ctx->pc = 0x238b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
    // 0x238b4c: 0xae200390
    ctx->pc = 0x238b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 912), GPR_U32(ctx, 0));
    // 0x238b50: 0xae200394
    ctx->pc = 0x238b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 0));
    // 0x238b54: 0xa6200218
    ctx->pc = 0x238b54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 536), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b58: 0xc08dff8
    ctx->pc = 0x238B58u;
    SET_GPR_U32(ctx, 31, 0x238B60u);
    ctx->pc = 0x238B5Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x237FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_enemy_level_0x237fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238B60u; }
    }
    if (ctx->pc != 0x238B60u) { return; }
    ctx->pc = 0x238B60u;
    // 0x238b60: 0xa622021a
    ctx->pc = 0x238b60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 538), (uint16_t)GPR_U32(ctx, 2));
    // 0x238b64: 0xa620032c
    ctx->pc = 0x238b64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 812), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b68: 0xa620032a
    ctx->pc = 0x238b68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 810), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b6c: 0xae200334
    ctx->pc = 0x238b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 0));
    // 0x238b70: 0xae200330
    ctx->pc = 0x238b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
    // 0x238b74: 0xae20033c
    ctx->pc = 0x238b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
    // 0x238b78: 0xae200338
    ctx->pc = 0x238b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
    // 0x238b7c: 0xa62002f2
    ctx->pc = 0x238b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 754), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b80: 0xae200340
    ctx->pc = 0x238b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x238b84: 0x3c01c479
    ctx->pc = 0x238b84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50297 << 16));
    // 0x238b88: 0x3421f99a
    ctx->pc = 0x238b88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63898));
    // 0x238b8c: 0x44810000
    ctx->pc = 0x238b8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238b90: 0xe6200320
    ctx->pc = 0x238b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
    // 0x238b94: 0x44800000
    ctx->pc = 0x238b94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x238b98: 0xe620031c
    ctx->pc = 0x238b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 796), bits); }
    // 0x238b9c: 0xe6200318
    ctx->pc = 0x238b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 792), bits); }
    // 0x238ba0: 0x24020001
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ba4: 0xa62202ee
    ctx->pc = 0x238ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 750), (uint16_t)GPR_U32(ctx, 2));
    // 0x238ba8: 0xa62202f0
    ctx->pc = 0x238ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 752), (uint16_t)GPR_U32(ctx, 2));
    // 0x238bac: 0xae200398
    ctx->pc = 0x238bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
    // 0x238bb0: 0xae3001f4
    ctx->pc = 0x238bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 16));
    // 0x238bb4: 0x3a420001
    ctx->pc = 0x238bb4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 1));
    // 0x238bb8: 0x2900a
    ctx->pc = 0x238bb8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    // 0x238bbc: 0x24030007
    ctx->pc = 0x238bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x238bc0: 0x3a42000a
    ctx->pc = 0x238bc0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 10));
    // 0x238bc4: 0x62900a
    ctx->pc = 0x238bc4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x238bc8: 0x2e420020
    ctx->pc = 0x238bc8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 32));
    // 0x238bcc: 0x14400009
    ctx->pc = 0x238BCCu;
    {
        const bool branch_taken_0x238bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x238BD0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 0));
        if (branch_taken_0x238bcc) {
            ctx->pc = 0x238BF4u;
            goto label_238bf4;
        }
    }
    ctx->pc = 0x238BD4u;
    // 0x238bd4: 0x3c020033
    ctx->pc = 0x238bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238bd8: 0x2442dc10
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x238bdc: 0x8e230000
    ctx->pc = 0x238bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238be0: 0x31880
    ctx->pc = 0x238be0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x238be4: 0x621821
    ctx->pc = 0x238be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238be8: 0x94620000
    ctx->pc = 0x238be8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238bec: 0x10000002
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238BF0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF8u;
            goto label_238bf8;
        }
    }
    ctx->pc = 0x238BF4u;
label_238bf4:
    // 0x238bf4: 0xa6320324
    ctx->pc = 0x238bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 18));
label_238bf8:
    // 0x238bf8: 0x96220324
    ctx->pc = 0x238bf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x238bfc: 0xa6220326
    ctx->pc = 0x238bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 806), (uint16_t)GPR_U32(ctx, 2));
    // 0x238c00: 0xa6220328
    ctx->pc = 0x238c00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 808), (uint16_t)GPR_U32(ctx, 2));
    // 0x238c04: 0xc08e210
    ctx->pc = 0x238C04u;
    SET_GPR_U32(ctx, 31, 0x238C0Cu);
    ctx->pc = 0x238C08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C0Cu; }
    }
    if (ctx->pc != 0x238C0Cu) { return; }
    ctx->pc = 0x238C0Cu;
    // 0x238c0c: 0x3c030033
    ctx->pc = 0x238c0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x238c10: 0x2463d748
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956872));
    // 0x238c14: 0x8e240000
    ctx->pc = 0x238c14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238c18: 0x41080
    ctx->pc = 0x238c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x238c1c: 0x431021
    ctx->pc = 0x238c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238c20: 0x3c013f80
    ctx->pc = 0x238c20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x238c24: 0x44810000
    ctx->pc = 0x238c24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x238c28: 0xc4410000
    ctx->pc = 0x238c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c2c: 0x0
    ctx->pc = 0x238c2cu;
    // NOP
    // 0x238c30: 0x0
    ctx->pc = 0x238c30u;
    // NOP
    // 0x238c34: 0x46010003
    ctx->pc = 0x238c34u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x238c38: 0xe62000cc
    ctx->pc = 0x238c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
    // 0x238c3c: 0xc08dfca
    ctx->pc = 0x238C3Cu;
    SET_GPR_U32(ctx, 31, 0x238C44u);
    ctx->pc = 0x238C40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x237F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_enemy_fight_0x237f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238C44u; }
    }
    if (ctx->pc != 0x238C44u) { return; }
    ctx->pc = 0x238C44u;
    // 0x238c44: 0xe62000d0
    ctx->pc = 0x238c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x238c48: 0x3c020033
    ctx->pc = 0x238c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238c4c: 0x2442d858
    ctx->pc = 0x238c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957144));
    // 0x238c50: 0x8e230000
    ctx->pc = 0x238c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x238c54: 0x31880
    ctx->pc = 0x238c54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x238c58: 0x621021
    ctx->pc = 0x238c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238c5c: 0xc4400000
    ctx->pc = 0x238c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238c60: 0xe62000d4
    ctx->pc = 0x238c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x238c64: 0x3c020033
    ctx->pc = 0x238c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238c68: 0x2442dc98
    ctx->pc = 0x238c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958232));
    // 0x238c6c: 0x621021
    ctx->pc = 0x238c6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238c70: 0x8c420000
    ctx->pc = 0x238c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238c74: 0xae2200d8
    ctx->pc = 0x238c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x238c78: 0x3c020033
    ctx->pc = 0x238c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x238c7c: 0x2442dd20
    ctx->pc = 0x238c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x238c80: 0x621821
    ctx->pc = 0x238c80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238c84: 0x8c620000
    ctx->pc = 0x238c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238c88: 0xae2200dc
    ctx->pc = 0x238c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x238c8c: 0xdfbf0040
    ctx->pc = 0x238c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238c90: 0xdfb30030
    ctx->pc = 0x238c90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238c94: 0xdfb20020
    ctx->pc = 0x238c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238c98: 0xdfb10010
    ctx->pc = 0x238c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238c9c: 0xdfb00000
    ctx->pc = 0x238c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ca0: 0x3e00008
    ctx->pc = 0x238CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238CA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238AF8u: goto label_238af8;
            case 0x238BF4u: goto label_238bf4;
            case 0x238BF8u: goto label_238bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238CA8u;
}
