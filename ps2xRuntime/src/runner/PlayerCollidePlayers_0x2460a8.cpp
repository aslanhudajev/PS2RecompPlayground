#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollidePlayers
// Address: 0x2460a8 - 0x24634c
void PlayerCollidePlayers_0x2460a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2460a8u;

    // 0x2460a8: 0x27bdff00
    ctx->pc = 0x2460a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2460ac: 0xffbf00d0
    ctx->pc = 0x2460acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2460b0: 0xffbe00c0
    ctx->pc = 0x2460b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x2460b4: 0xffb700b0
    ctx->pc = 0x2460b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x2460b8: 0xffb600a0
    ctx->pc = 0x2460b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2460bc: 0xffb50090
    ctx->pc = 0x2460bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2460c0: 0xffb40080
    ctx->pc = 0x2460c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2460c4: 0xffb30070
    ctx->pc = 0x2460c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2460c8: 0xffb20060
    ctx->pc = 0x2460c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2460cc: 0xffb10050
    ctx->pc = 0x2460ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2460d0: 0xffb00040
    ctx->pc = 0x2460d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2460d4: 0xe7b600f0
    ctx->pc = 0x2460d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2460d8: 0xe7b500e8
    ctx->pc = 0x2460d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2460dc: 0xe7b400e0
    ctx->pc = 0x2460dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2460e0: 0x80b82d
    ctx->pc = 0x2460e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460e4: 0xa0902d
    ctx->pc = 0x2460e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460e8: 0xc0882d
    ctx->pc = 0x2460e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460ec: 0xe0a02d
    ctx->pc = 0x2460ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460f0: 0x46006506
    ctx->pc = 0x2460f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2460f4: 0x46006d86
    ctx->pc = 0x2460f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2460f8: 0x100b02d
    ctx->pc = 0x2460f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2460fc: 0x2415ffff
    ctx->pc = 0x2460fcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246100: 0x4480a800
    ctx->pc = 0x246100u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x246104: 0x982d
    ctx->pc = 0x246104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246108: 0x3c020032
    ctx->pc = 0x246108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24610c: 0x245e1bc0
    ctx->pc = 0x24610cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x246110: 0x24022b00
    ctx->pc = 0x246110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x246114: 0x0
    ctx->pc = 0x246114u;
    // NOP
label_246118:
    // 0x246118: 0x2621818
    ctx->pc = 0x246118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24611c: 0x7e8021
    ctx->pc = 0x24611cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x246120: 0x8ee20000
    ctx->pc = 0x246120u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x246124: 0x12620042
    ctx->pc = 0x246124u;
    {
        const bool branch_taken_0x246124 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x246128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x246124) {
            ctx->pc = 0x246230u;
            goto label_246230;
        }
    }
    ctx->pc = 0x24612Cu;
    // 0x24612c: 0x8e0300fc
    ctx->pc = 0x24612cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x246130: 0x10620003
    ctx->pc = 0x246130u;
    {
        const bool branch_taken_0x246130 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x246134u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x246130) {
            ctx->pc = 0x246140u;
            goto label_246140;
        }
    }
    ctx->pc = 0x246138u;
    // 0x246138: 0x5462003e
    ctx->pc = 0x246138u;
    {
        const bool branch_taken_0x246138 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x246138) {
            ctx->pc = 0x24613Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246234u;
            goto label_246234;
        }
    }
    ctx->pc = 0x246140u;
label_246140:
    // 0x246140: 0x9602093c
    ctx->pc = 0x246140u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
    // 0x246144: 0x30420020
    ctx->pc = 0x246144u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x246148: 0x5440003a
    ctx->pc = 0x246148u;
    {
        const bool branch_taken_0x246148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x246148) {
            ctx->pc = 0x24614Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246234u;
            goto label_246234;
        }
    }
    ctx->pc = 0x246150u;
    // 0x246150: 0xc6020070
    ctx->pc = 0x246150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246154: 0xc6400000
    ctx->pc = 0x246154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246158: 0x46001081
    ctx->pc = 0x246158u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24615c: 0xe7a20020
    ctx->pc = 0x24615cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246160: 0xafa00024
    ctx->pc = 0x246160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x246164: 0xc6030078
    ctx->pc = 0x246164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x246168: 0xc6440008
    ctx->pc = 0x246168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24616c: 0x460418c1
    ctx->pc = 0x24616cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x246170: 0xe7a30028
    ctx->pc = 0x246170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x246174: 0xc6210000
    ctx->pc = 0x246174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246178: 0x46000841
    ctx->pc = 0x246178u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24617c: 0xe7a10030
    ctx->pc = 0x24617cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x246180: 0xafa00034
    ctx->pc = 0x246180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x246184: 0xc6200008
    ctx->pc = 0x246184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246188: 0x46040001
    ctx->pc = 0x246188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x24618c: 0xe7a00038
    ctx->pc = 0x24618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x246190: 0x46011082
    ctx->pc = 0x246190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x246194: 0x460018c2
    ctx->pc = 0x246194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x246198: 0x46031080
    ctx->pc = 0x246198u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x24619c: 0xc7a00024
    ctx->pc = 0x24619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2461a0: 0x46001034
    ctx->pc = 0x2461a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2461a4: 0x0
    ctx->pc = 0x2461a4u;
    // NOP
    // 0x2461a8: 0x45030022
    ctx->pc = 0x2461A8u;
    {
        const bool branch_taken_0x2461a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2461a8) {
            ctx->pc = 0x2461ACu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246234u;
            goto label_246234;
        }
    }
    ctx->pc = 0x2461B0u;
    // 0x2461b0: 0xc60c0828
    ctx->pc = 0x2461b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2461b4: 0x26040070
    ctx->pc = 0x2461b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x2461b8: 0x240282d
    ctx->pc = 0x2461b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461bc: 0x220302d
    ctx->pc = 0x2461bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2461c0: 0x27a70010
    ctx->pc = 0x2461c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2461c4: 0x460ca300
    ctx->pc = 0x2461c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x2461c8: 0x4600b346
    ctx->pc = 0x2461c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2461cc: 0xc0a4202
    ctx->pc = 0x2461CCu;
    SET_GPR_U32(ctx, 31, 0x2461D4u);
    ctx->pc = 0x2461D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2461D4u; }
    }
    if (ctx->pc != 0x2461D4u) { return; }
    ctx->pc = 0x2461D4u;
    // 0x2461d4: 0x10400016
    ctx->pc = 0x2461D4u;
    {
        const bool branch_taken_0x2461d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2461D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2461d4) {
            ctx->pc = 0x246230u;
            goto label_246230;
        }
    }
    ctx->pc = 0x2461DCu;
    // 0x2461dc: 0xc6200000
    ctx->pc = 0x2461dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2461e0: 0x46006301
    ctx->pc = 0x2461e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2461e4: 0xe7ac0000
    ctx->pc = 0x2461e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2461e8: 0xc7a00014
    ctx->pc = 0x2461e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2461ec: 0xc6210004
    ctx->pc = 0x2461ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2461f0: 0x46010001
    ctx->pc = 0x2461f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2461f4: 0xe7a00004
    ctx->pc = 0x2461f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2461f8: 0xc7ad0018
    ctx->pc = 0x2461f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2461fc: 0xc6200008
    ctx->pc = 0x2461fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246200: 0x46006b41
    ctx->pc = 0x246200u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x246204: 0xc0b5c34
    ctx->pc = 0x246204u;
    SET_GPR_U32(ctx, 31, 0x24620Cu);
    ctx->pc = 0x246208u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24620Cu; }
    }
    if (ctx->pc != 0x24620Cu) { return; }
    ctx->pc = 0x24620Cu;
    // 0x24620c: 0x6a00004
    ctx->pc = 0x24620Cu;
    {
        const bool branch_taken_0x24620c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x246210u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x24620c) {
            ctx->pc = 0x246220u;
            goto label_246220;
        }
    }
    ctx->pc = 0x246214u;
    // 0x246214: 0x46151034
    ctx->pc = 0x246214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246218: 0x45000003
    ctx->pc = 0x246218u;
    {
        const bool branch_taken_0x246218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x246218) {
            ctx->pc = 0x246228u;
            goto label_246228;
        }
    }
    ctx->pc = 0x246220u;
label_246220:
    // 0x246220: 0x260a82d
    ctx->pc = 0x246220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246224: 0x46001546
    ctx->pc = 0x246224u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
label_246228:
    // 0x246228: 0x16c00005
    ctx->pc = 0x246228u;
    {
        const bool branch_taken_0x246228 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x246228) {
            ctx->pc = 0x246240u;
            goto label_246240;
        }
    }
    ctx->pc = 0x246230u;
label_246230:
    // 0x246230: 0x26730001
    ctx->pc = 0x246230u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_246234:
    // 0x246234: 0x2a620004
    ctx->pc = 0x246234u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x246238: 0x1440ffb7
    ctx->pc = 0x246238u;
    {
        const bool branch_taken_0x246238 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24623Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x246238) {
            ctx->pc = 0x246118u;
            goto label_246118;
        }
    }
    ctx->pc = 0x246240u;
label_246240:
    // 0x246240: 0x6a00032
    ctx->pc = 0x246240u;
    {
        const bool branch_taken_0x246240 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x246244u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x246240) {
            ctx->pc = 0x24630Cu;
            goto label_24630c;
        }
    }
    ctx->pc = 0x246248u;
    // 0x246248: 0x2a31818
    ctx->pc = 0x246248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24624c: 0x3c020032
    ctx->pc = 0x24624cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x246250: 0x24421bc0
    ctx->pc = 0x246250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x246254: 0x628021
    ctx->pc = 0x246254u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x246258: 0xc62c0000
    ctx->pc = 0x246258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24625c: 0xc6000070
    ctx->pc = 0x24625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246260: 0x46006301
    ctx->pc = 0x246260u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x246264: 0xe7ac0000
    ctx->pc = 0x246264u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x246268: 0xafa00004
    ctx->pc = 0x246268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x24626c: 0xc62d0008
    ctx->pc = 0x24626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x246270: 0xc6000078
    ctx->pc = 0x246270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246274: 0x46006b41
    ctx->pc = 0x246274u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x246278: 0xc0b5c34
    ctx->pc = 0x246278u;
    SET_GPR_U32(ctx, 31, 0x246280u);
    ctx->pc = 0x24627Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246280u; }
    }
    if (ctx->pc != 0x246280u) { return; }
    ctx->pc = 0x246280u;
    // 0x246280: 0x46000086
    ctx->pc = 0x246280u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x246284: 0x3c013a83
    ctx->pc = 0x246284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x246288: 0x3421126f
    ctx->pc = 0x246288u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x24628c: 0x44810000
    ctx->pc = 0x24628cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x246290: 0x46020034
    ctx->pc = 0x246290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246294: 0x0
    ctx->pc = 0x246294u;
    // NOP
    // 0x246298: 0x45000016
    ctx->pc = 0x246298u;
    {
        const bool branch_taken_0x246298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24629Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x246298) {
            ctx->pc = 0x2462F4u;
            goto label_2462f4;
        }
    }
    ctx->pc = 0x2462A0u;
    // 0x2462a0: 0xc6010828
    ctx->pc = 0x2462a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2462a4: 0x4601a040
    ctx->pc = 0x2462a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2462a8: 0x46020841
    ctx->pc = 0x2462a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2462ac: 0x0
    ctx->pc = 0x2462acu;
    // NOP
    // 0x2462b0: 0x0
    ctx->pc = 0x2462b0u;
    // NOP
    // 0x2462b4: 0x46020843
    ctx->pc = 0x2462b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2462b8: 0x46000802
    ctx->pc = 0x2462b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2462bc: 0xc6220000
    ctx->pc = 0x2462bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2462c0: 0x46020000
    ctx->pc = 0x2462c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2462c4: 0xe6800000
    ctx->pc = 0x2462c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2462c8: 0xc7a00004
    ctx->pc = 0x2462c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462cc: 0x46000802
    ctx->pc = 0x2462ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2462d0: 0xc6220004
    ctx->pc = 0x2462d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2462d4: 0x46020000
    ctx->pc = 0x2462d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2462d8: 0xe6800004
    ctx->pc = 0x2462d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2462dc: 0xc7a00008
    ctx->pc = 0x2462dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462e0: 0x46000842
    ctx->pc = 0x2462e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2462e4: 0xc6200008
    ctx->pc = 0x2462e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462e8: 0x46000840
    ctx->pc = 0x2462e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2462ec: 0x10000007
    ctx->pc = 0x2462ECu;
    {
        const bool branch_taken_0x2462ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2462F0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        if (branch_taken_0x2462ec) {
            ctx->pc = 0x24630Cu;
            goto label_24630c;
        }
    }
    ctx->pc = 0x2462F4u;
label_2462f4:
    // 0x2462f4: 0xc6400000
    ctx->pc = 0x2462f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2462f8: 0xe6800000
    ctx->pc = 0x2462f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x2462fc: 0xc6400004
    ctx->pc = 0x2462fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246300: 0xe6800004
    ctx->pc = 0x246300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x246304: 0xc6400008
    ctx->pc = 0x246304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246308: 0xe6800008
    ctx->pc = 0x246308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_24630c:
    // 0x24630c: 0x2a0102d
    ctx->pc = 0x24630cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246310: 0xdfbf00d0
    ctx->pc = 0x246310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x246314: 0xdfbe00c0
    ctx->pc = 0x246314u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x246318: 0xdfb700b0
    ctx->pc = 0x246318u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24631c: 0xdfb600a0
    ctx->pc = 0x24631cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x246320: 0xdfb50090
    ctx->pc = 0x246320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x246324: 0xdfb40080
    ctx->pc = 0x246324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246328: 0xdfb30070
    ctx->pc = 0x246328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24632c: 0xdfb20060
    ctx->pc = 0x24632cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x246330: 0xdfb10050
    ctx->pc = 0x246330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246334: 0xdfb00040
    ctx->pc = 0x246334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246338: 0xc7b600f0
    ctx->pc = 0x246338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24633c: 0xc7b500e8
    ctx->pc = 0x24633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x246340: 0xc7b400e0
    ctx->pc = 0x246340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x246344: 0x3e00008
    ctx->pc = 0x246344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246118u: goto label_246118;
            case 0x246140u: goto label_246140;
            case 0x246220u: goto label_246220;
            case 0x246228u: goto label_246228;
            case 0x246230u: goto label_246230;
            case 0x246234u: goto label_246234;
            case 0x246240u: goto label_246240;
            case 0x2462F4u: goto label_2462f4;
            case 0x24630Cu: goto label_24630c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24634Cu;
}
