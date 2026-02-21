#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamLimitAttn
// Address: 0x2a05c0 - 0x2a0978
void BossCamLimitAttn_0x2a05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a05c0u;

    // 0x2a05c0: 0x27bdff40
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a05c4: 0xffbf00a0
    ctx->pc = 0x2a05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2a05c8: 0xffb60090
    ctx->pc = 0x2a05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2a05cc: 0xffb50080
    ctx->pc = 0x2a05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2a05d0: 0xffb40070
    ctx->pc = 0x2a05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a05d4: 0xffb30060
    ctx->pc = 0x2a05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2a05d8: 0xffb20050
    ctx->pc = 0x2a05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a05dc: 0xffb10040
    ctx->pc = 0x2a05dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2a05e0: 0xffb00030
    ctx->pc = 0x2a05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a05e4: 0xe7b400b0
    ctx->pc = 0x2a05e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a05e8: 0x80902d
    ctx->pc = 0x2a05e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05ec: 0x3c100036
    ctx->pc = 0x2a05ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a05f0: 0x8e02dbc0
    ctx->pc = 0x2a05f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a05f4: 0xc6400000
    ctx->pc = 0x2a05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a05f8: 0xc44100b0
    ctx->pc = 0x2a05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a05fc: 0x46010001
    ctx->pc = 0x2a05fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0600: 0xe7a00020
    ctx->pc = 0x2a0600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0604: 0xc6400004
    ctx->pc = 0x2a0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0608: 0xc44100b4
    ctx->pc = 0x2a0608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a060c: 0x46010001
    ctx->pc = 0x2a060cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0610: 0xe7a00024
    ctx->pc = 0x2a0610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a0614: 0xc6400008
    ctx->pc = 0x2a0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0618: 0xc44100b8
    ctx->pc = 0x2a0618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a061c: 0x46010001
    ctx->pc = 0x2a061cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0620: 0xe7a00028
    ctx->pc = 0x2a0620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a0624: 0xc0b58a4
    ctx->pc = 0x2A0624u;
    SET_GPR_U32(ctx, 31, 0x2A062Cu);
    ctx->pc = 0x2A0628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A062Cu; }
    }
    if (ctx->pc != 0x2A062Cu) { return; }
    ctx->pc = 0x2A062Cu;
    // 0x2a062c: 0x46000346
    ctx->pc = 0x2a062cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2a0630: 0x3c013a83
    ctx->pc = 0x2a0630u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2a0634: 0x3421126f
    ctx->pc = 0x2a0634u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2a0638: 0x44810000
    ctx->pc = 0x2a0638u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a063c: 0x46006836
    ctx->pc = 0x2a063cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0640: 0x0
    ctx->pc = 0x2a0640u;
    // NOP
    // 0x2a0644: 0x45000016
    ctx->pc = 0x2A0644u;
    {
        const bool branch_taken_0x2a0644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0648u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
        if (branch_taken_0x2a0644) {
            ctx->pc = 0x2A06A0u;
            goto label_2a06a0;
        }
    }
    ctx->pc = 0x2A064Cu;
    // 0x2a064c: 0xac4000d4
    ctx->pc = 0x2a064cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2a0650: 0xac4000d8
    ctx->pc = 0x2a0650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x2a0654: 0xac4000bc
    ctx->pc = 0x2a0654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x2a0658: 0xac4000c0
    ctx->pc = 0x2a0658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2a065c: 0xac4000c4
    ctx->pc = 0x2a065cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x2a0660: 0xac4000c8
    ctx->pc = 0x2a0660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
    // 0x2a0664: 0xac4000cc
    ctx->pc = 0x2a0664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x2a0668: 0xac4000d0
    ctx->pc = 0x2a0668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x2a066c: 0xc6400000
    ctx->pc = 0x2a066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0670: 0xe44000a4
    ctx->pc = 0x2a0670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0674: 0xc6400004
    ctx->pc = 0x2a0674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0678: 0xe44000a8
    ctx->pc = 0x2a0678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a067c: 0xc6400008
    ctx->pc = 0x2a067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0680: 0xe44000ac
    ctx->pc = 0x2a0680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a0684: 0xc6400000
    ctx->pc = 0x2a0684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0688: 0xe44000b0
    ctx->pc = 0x2a0688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a068c: 0xc6400004
    ctx->pc = 0x2a068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0690: 0xe44000b4
    ctx->pc = 0x2a0690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a0694: 0xc6400008
    ctx->pc = 0x2a0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0698: 0x1000007c
    ctx->pc = 0x2A0698u;
    {
        const bool branch_taken_0x2a0698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A069Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
        if (branch_taken_0x2a0698) {
            ctx->pc = 0x2A088Cu;
            goto label_2a088c;
        }
    }
    ctx->pc = 0x2A06A0u;
label_2a06a0:
    // 0x2a06a0: 0x3c100036
    ctx->pc = 0x2a06a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a06a4: 0x8e04dbc0
    ctx->pc = 0x2a06a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a06a8: 0xc48c00d4
    ctx->pc = 0x2a06a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a06ac: 0x4480a000
    ctx->pc = 0x2a06acu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x2a06b0: 0x46146036
    ctx->pc = 0x2a06b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a06b4: 0x0
    ctx->pc = 0x2a06b4u;
    // NOP
    // 0x2a06b8: 0x45000020
    ctx->pc = 0x2A06B8u;
    {
        const bool branch_taken_0x2a06b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A06BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a06b8) {
            ctx->pc = 0x2A073Cu;
            goto label_2a073c;
        }
    }
    ctx->pc = 0x2A06C0u;
    // 0x2a06c0: 0x3c030036
    ctx->pc = 0x2a06c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a06c4: 0x248400d8
    ctx->pc = 0x2a06c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 216));
    // 0x2a06c8: 0xc44edb80
    ctx->pc = 0x2a06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a06cc: 0xc46fdb84
    ctx->pc = 0x2a06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a06d0: 0x282d
    ctx->pc = 0x2a06d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06d4: 0xc0a7ce8
    ctx->pc = 0x2A06D4u;
    SET_GPR_U32(ctx, 31, 0x2A06DCu);
    ctx->pc = 0x2A06D8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x29F3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal_0x29f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06DCu; }
    }
    if (ctx->pc != 0x2A06DCu) { return; }
    ctx->pc = 0x2A06DCu;
    // 0x2a06dc: 0x8e02dbc0
    ctx->pc = 0x2a06dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a06e0: 0xe44000d4
    ctx->pc = 0x2a06e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a06e4: 0xc7a20020
    ctx->pc = 0x2a06e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a06e8: 0xe44200bc
    ctx->pc = 0x2a06e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2a06ec: 0xc7a30024
    ctx->pc = 0x2a06ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a06f0: 0xe44300c0
    ctx->pc = 0x2a06f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x2a06f4: 0xc7a40028
    ctx->pc = 0x2a06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a06f8: 0xe44400c4
    ctx->pc = 0x2a06f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x2a06fc: 0xe45400c8
    ctx->pc = 0x2a06fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x2a0700: 0xe45400cc
    ctx->pc = 0x2a0700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x2a0704: 0xe45400d0
    ctx->pc = 0x2a0704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2a0708: 0x46001082
    ctx->pc = 0x2a0708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2a070c: 0xc44100b0
    ctx->pc = 0x2a070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0710: 0x46011080
    ctx->pc = 0x2a0710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a0714: 0xe44200a4
    ctx->pc = 0x2a0714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0718: 0x460018c2
    ctx->pc = 0x2a0718u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a071c: 0xc44100b4
    ctx->pc = 0x2a071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0720: 0x460118c0
    ctx->pc = 0x2a0720u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2a0724: 0xe44300a8
    ctx->pc = 0x2a0724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a0728: 0x46002102
    ctx->pc = 0x2a0728u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a072c: 0xc44000b8
    ctx->pc = 0x2a072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0730: 0x46002100
    ctx->pc = 0x2a0730u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a0734: 0x10000055
    ctx->pc = 0x2A0734u;
    {
        const bool branch_taken_0x2a0734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0738u;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
        if (branch_taken_0x2a0734) {
            ctx->pc = 0x2A088Cu;
            goto label_2a088c;
        }
    }
    ctx->pc = 0x2A073Cu;
label_2a073c:
    // 0x2a073c: 0x3c020036
    ctx->pc = 0x2a073cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0740: 0x8c42dbc0
    ctx->pc = 0x2a0740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0744: 0xc7a10020
    ctx->pc = 0x2a0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0748: 0xc44000bc
    ctx->pc = 0x2a0748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a074c: 0x46000842
    ctx->pc = 0x2a074cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0750: 0xc7a00024
    ctx->pc = 0x2a0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0754: 0xc44200c0
    ctx->pc = 0x2a0754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0758: 0x46020002
    ctx->pc = 0x2a0758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a075c: 0x46000840
    ctx->pc = 0x2a075cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0760: 0xc7a00028
    ctx->pc = 0x2a0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0764: 0xc44200c4
    ctx->pc = 0x2a0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0768: 0x46020002
    ctx->pc = 0x2a0768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a076c: 0x46000840
    ctx->pc = 0x2a076cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0770: 0x3c013f77
    ctx->pc = 0x2a0770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16247 << 16));
    // 0x2a0774: 0x34210a3d
    ctx->pc = 0x2a0774u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2621));
    // 0x2a0778: 0x44810000
    ctx->pc = 0x2a0778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a077c: 0x46000834
    ctx->pc = 0x2a077cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0780: 0x0
    ctx->pc = 0x2a0780u;
    // NOP
    // 0x2a0784: 0x45000009
    ctx->pc = 0x2A0784u;
    {
        const bool branch_taken_0x2a0784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0788u;
        SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0784) {
            ctx->pc = 0x2A07ACu;
            goto label_2a07ac;
        }
    }
    ctx->pc = 0x2A078Cu;
    // 0x2a078c: 0xac4000d4
    ctx->pc = 0x2a078cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2a0790: 0xc44000a4
    ctx->pc = 0x2a0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0794: 0xe44000b0
    ctx->pc = 0x2a0794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a0798: 0xc44000a8
    ctx->pc = 0x2a0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a079c: 0xe44000b4
    ctx->pc = 0x2a079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a07a0: 0xc44000ac
    ctx->pc = 0x2a07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a07a4: 0x1000000d
    ctx->pc = 0x2A07A4u;
    {
        const bool branch_taken_0x2a07a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A07A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
        if (branch_taken_0x2a07a4) {
            ctx->pc = 0x2A07DCu;
            goto label_2a07dc;
        }
    }
    ctx->pc = 0x2A07ACu;
label_2a07ac:
    // 0x2a07ac: 0x8e04dbc0
    ctx->pc = 0x2a07acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a07b0: 0x3c020036
    ctx->pc = 0x2a07b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a07b4: 0x3c030036
    ctx->pc = 0x2a07b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a07b8: 0xc48c00d4
    ctx->pc = 0x2a07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a07bc: 0x248400d8
    ctx->pc = 0x2a07bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 216));
    // 0x2a07c0: 0xc44edb80
    ctx->pc = 0x2a07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a07c4: 0xc46fdb84
    ctx->pc = 0x2a07c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a07c8: 0x44808000
    ctx->pc = 0x2a07c8u;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 0);
    // 0x2a07cc: 0xc0a7ce8
    ctx->pc = 0x2A07CCu;
    SET_GPR_U32(ctx, 31, 0x2A07D4u);
    ctx->pc = 0x2A07D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29F3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal_0x29f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07D4u; }
    }
    if (ctx->pc != 0x2A07D4u) { return; }
    ctx->pc = 0x2A07D4u;
    // 0x2a07d4: 0x8e02dbc0
    ctx->pc = 0x2a07d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a07d8: 0xe44000d4
    ctx->pc = 0x2a07d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2a07dc:
    // 0x2a07dc: 0x882d
    ctx->pc = 0x2a07dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07e0: 0x3c130036
    ctx->pc = 0x2a07e0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)54 << 16));
    // 0x2a07e4: 0x27b40020
    ctx->pc = 0x2a07e4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a07e8: 0x3c160036
    ctx->pc = 0x2a07e8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)54 << 16));
    // 0x2a07ec: 0x3c150036
    ctx->pc = 0x2a07ecu;
    SET_GPR_U32(ctx, 21, ((uint32_t)54 << 16));
    // 0x2a07f0: 0x8e65dbc0
    ctx->pc = 0x2a07f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4294958016)));
    // 0x2a07f4: 0x0
    ctx->pc = 0x2a07f4u;
    // NOP
label_2a07f8:
    // 0x2a07f8: 0x118080
    ctx->pc = 0x2a07f8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a07fc: 0xb01021
    ctx->pc = 0x2a07fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2a0800: 0x2901821
    ctx->pc = 0x2a0800u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2a0804: 0x260400c8
    ctx->pc = 0x2a0804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 200));
    // 0x2a0808: 0xc44c00bc
    ctx->pc = 0x2a0808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a080c: 0xc46d0000
    ctx->pc = 0x2a080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a0810: 0x852021
    ctx->pc = 0x2a0810u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a0814: 0xc6cedb90
    ctx->pc = 0x2a0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294957968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a0818: 0xc6afdb94
    ctx->pc = 0x2a0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294957972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a081c: 0x44808000
    ctx->pc = 0x2a081cu;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 0);
    // 0x2a0820: 0xc0a7ce8
    ctx->pc = 0x2A0820u;
    SET_GPR_U32(ctx, 31, 0x2A0828u);
    ctx->pc = 0x2A0824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29F3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal_0x29f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0828u; }
    }
    if (ctx->pc != 0x2A0828u) { return; }
    ctx->pc = 0x2A0828u;
    // 0x2a0828: 0x8e62dbc0
    ctx->pc = 0x2a0828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294958016)));
    // 0x2a082c: 0x501021
    ctx->pc = 0x2a082cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a0830: 0xe44000bc
    ctx->pc = 0x2a0830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2a0834: 0x26310001
    ctx->pc = 0x2a0834u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a0838: 0x2a220003
    ctx->pc = 0x2a0838u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x2a083c: 0x5440ffee
    ctx->pc = 0x2A083Cu;
    {
        const bool branch_taken_0x2a083c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a083c) {
            ctx->pc = 0x2A0840u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 4294958016)));
            ctx->pc = 0x2A07F8u;
            goto label_2a07f8;
        }
    }
    ctx->pc = 0x2A0844u;
    // 0x2a0844: 0x3c020036
    ctx->pc = 0x2a0844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0848: 0x8c42dbc0
    ctx->pc = 0x2a0848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a084c: 0xc44000bc
    ctx->pc = 0x2a084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0850: 0xc44200d4
    ctx->pc = 0x2a0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a0854: 0x46020002
    ctx->pc = 0x2a0854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a0858: 0xc44100b0
    ctx->pc = 0x2a0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a085c: 0x46010000
    ctx->pc = 0x2a085cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0860: 0xe44000a4
    ctx->pc = 0x2a0860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0864: 0xc44000c0
    ctx->pc = 0x2a0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0868: 0x46020002
    ctx->pc = 0x2a0868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a086c: 0xc44100b4
    ctx->pc = 0x2a086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0870: 0x46010000
    ctx->pc = 0x2a0870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0874: 0xe44000a8
    ctx->pc = 0x2a0874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a0878: 0xc44000c4
    ctx->pc = 0x2a0878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a087c: 0x46020002
    ctx->pc = 0x2a087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2a0880: 0xc44100b8
    ctx->pc = 0x2a0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0884: 0x46010000
    ctx->pc = 0x2a0884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a0888: 0xe44000ac
    ctx->pc = 0x2a0888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2a088c:
    // 0x2a088c: 0x3c130031
    ctx->pc = 0x2a088cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x2a0890: 0xde620e28
    ctx->pc = 0x2a0890u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 3624)));
    // 0x2a0894: 0x30420010
    ctx->pc = 0x2a0894u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2a0898: 0x1040002d
    ctx->pc = 0x2A0898u;
    {
        const bool branch_taken_0x2a0898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A089Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2a0898) {
            ctx->pc = 0x2A0950u;
            goto label_2a0950;
        }
    }
    ctx->pc = 0x2A08A0u;
    // 0x2a08a0: 0xc0be862
    ctx->pc = 0x2A08A0u;
    SET_GPR_U32(ctx, 31, 0x2A08A8u);
    ctx->pc = 0x2A08A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08A8u; }
    }
    if (ctx->pc != 0x2A08A8u) { return; }
    ctx->pc = 0x2A08A8u;
    // 0x2a08a8: 0x40882d
    ctx->pc = 0x2a08a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08ac: 0xc0be862
    ctx->pc = 0x2A08ACu;
    SET_GPR_U32(ctx, 31, 0x2A08B4u);
    ctx->pc = 0x2A08B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08B4u; }
    }
    if (ctx->pc != 0x2A08B4u) { return; }
    ctx->pc = 0x2A08B4u;
    // 0x2a08b4: 0x40802d
    ctx->pc = 0x2a08b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08b8: 0xc0be862
    ctx->pc = 0x2A08B8u;
    SET_GPR_U32(ctx, 31, 0x2A08C0u);
    ctx->pc = 0x2A08BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08C0u; }
    }
    if (ctx->pc != 0x2A08C0u) { return; }
    ctx->pc = 0x2A08C0u;
    // 0x2a08c0: 0x3a0202d
    ctx->pc = 0x2a08c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08c4: 0x3c05003b
    ctx->pc = 0x2a08c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a08c8: 0x24a5e518
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960408));
    // 0x2a08cc: 0x220302d
    ctx->pc = 0x2a08ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08d0: 0x200382d
    ctx->pc = 0x2a08d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08d4: 0xc0b6252
    ctx->pc = 0x2A08D4u;
    SET_GPR_U32(ctx, 31, 0x2A08DCu);
    ctx->pc = 0x2A08D8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08DCu; }
    }
    if (ctx->pc != 0x2A08DCu) { return; }
    ctx->pc = 0x2A08DCu;
    // 0x2a08dc: 0xc0bf306
    ctx->pc = 0x2A08DCu;
    SET_GPR_U32(ctx, 31, 0x2A08E4u);
    ctx->pc = 0x2A08E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08E4u; }
    }
    if (ctx->pc != 0x2A08E4u) { return; }
    ctx->pc = 0x2A08E4u;
    // 0x2a08e4: 0x24430002
    ctx->pc = 0x2a08e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2));
    // 0x2a08e8: 0xde620e28
    ctx->pc = 0x2a08e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 3624)));
    // 0x2a08ec: 0x30420001
    ctx->pc = 0x2a08ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a08f0: 0x2103c
    ctx->pc = 0x2a08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a08f4: 0x2103f
    ctx->pc = 0x2a08f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a08f8: 0x10400014
    ctx->pc = 0x2A08F8u;
    {
        const bool branch_taken_0x2a08f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A08FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x2a08f8) {
            ctx->pc = 0x2A094Cu;
            goto label_2a094c;
        }
    }
    ctx->pc = 0x2A0900u;
    // 0x2a0900: 0x2038023
    ctx->pc = 0x2a0900u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a0904: 0x3c020036
    ctx->pc = 0x2a0904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0908: 0x8c42dbc0
    ctx->pc = 0x2a0908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a090c: 0x3c0400ff
    ctx->pc = 0x2a090cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2a0910: 0x3484ff00
    ctx->pc = 0x2a0910u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2a0914: 0x200282d
    ctx->pc = 0x2a0914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0918: 0x24060022
    ctx->pc = 0x2a0918u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a091c: 0x3c07003b
    ctx->pc = 0x2a091cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x2a0920: 0x24e7e530
    ctx->pc = 0x2a0920u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960432));
    // 0x2a0924: 0xc44c00b0
    ctx->pc = 0x2a0924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0928: 0xc44d00b4
    ctx->pc = 0x2a0928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a092c: 0xc0b4822
    ctx->pc = 0x2A092Cu;
    SET_GPR_U32(ctx, 31, 0x2A0934u);
    ctx->pc = 0x2A0930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0934u; }
    }
    if (ctx->pc != 0x2A0934u) { return; }
    ctx->pc = 0x2A0934u;
    // 0x2a0934: 0x3c0400ff
    ctx->pc = 0x2a0934u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2a0938: 0x3484ff00
    ctx->pc = 0x2a0938u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2a093c: 0x200282d
    ctx->pc = 0x2a093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0940: 0x24060023
    ctx->pc = 0x2a0940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 35));
    // 0x2a0944: 0xc0b4822
    ctx->pc = 0x2A0944u;
    SET_GPR_U32(ctx, 31, 0x2A094Cu);
    ctx->pc = 0x2A0948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A094Cu; }
    }
    if (ctx->pc != 0x2A094Cu) { return; }
    ctx->pc = 0x2A094Cu;
label_2a094c:
    // 0x2a094c: 0xdfbf00a0
    ctx->pc = 0x2a094cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a0950:
    // 0x2a0950: 0xdfb60090
    ctx->pc = 0x2a0950u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0954: 0xdfb50080
    ctx->pc = 0x2a0954u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0958: 0xdfb40070
    ctx->pc = 0x2a0958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a095c: 0xdfb30060
    ctx->pc = 0x2a095cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0960: 0xdfb20050
    ctx->pc = 0x2a0960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0964: 0xdfb10040
    ctx->pc = 0x2a0964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0968: 0xdfb00030
    ctx->pc = 0x2a0968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a096c: 0xc7b400b0
    ctx->pc = 0x2a096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0970: 0x3e00008
    ctx->pc = 0x2A0970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0974u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A06A0u: goto label_2a06a0;
            case 0x2A073Cu: goto label_2a073c;
            case 0x2A07ACu: goto label_2a07ac;
            case 0x2A07DCu: goto label_2a07dc;
            case 0x2A07F8u: goto label_2a07f8;
            case 0x2A088Cu: goto label_2a088c;
            case 0x2A094Cu: goto label_2a094c;
            case 0x2A0950u: goto label_2a0950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0978u;
}
