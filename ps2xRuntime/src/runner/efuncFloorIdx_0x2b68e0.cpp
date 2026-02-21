#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncFloorIdx
// Address: 0x2b68e0 - 0x2b6bc0
void efuncFloorIdx_0x2b68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b68e0u;

    // 0x2b68e0: 0x27bdfe80
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2b68e4: 0xffbf0150
    ctx->pc = 0x2b68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x2b68e8: 0xffb50140
    ctx->pc = 0x2b68e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x2b68ec: 0xffb40130
    ctx->pc = 0x2b68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2b68f0: 0xffb30120
    ctx->pc = 0x2b68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x2b68f4: 0xffb20110
    ctx->pc = 0x2b68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2b68f8: 0xffb10100
    ctx->pc = 0x2b68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x2b68fc: 0xffb000f0
    ctx->pc = 0x2b68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2b6900: 0xe7b70178
    ctx->pc = 0x2b6900u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2b6904: 0xe7b60170
    ctx->pc = 0x2b6904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2b6908: 0xe7b50168
    ctx->pc = 0x2b6908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2b690c: 0xe7b40160
    ctx->pc = 0x2b690cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2b6910: 0x80902d
    ctx->pc = 0x2b6910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6914: 0x8e540000
    ctx->pc = 0x2b6914u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6918: 0x8e510010
    ctx->pc = 0x2b6918u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b691c: 0x220202d
    ctx->pc = 0x2b691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6920: 0xc0ad1d2
    ctx->pc = 0x2B6920u;
    SET_GPR_U32(ctx, 31, 0x2B6928u);
    ctx->pc = 0x2B6924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6928u; }
    }
    if (ctx->pc != 0x2B6928u) { return; }
    ctx->pc = 0x2B6928u;
    // 0x2b6928: 0x46000546
    ctx->pc = 0x2b6928u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b692c: 0x3c01bf80
    ctx->pc = 0x2b692cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2b6930: 0x4481a000
    ctx->pc = 0x2b6930u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2b6934: 0x24100001
    ctx->pc = 0x2b6934u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6938: 0x8e42000c
    ctx->pc = 0x2b6938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b693c: 0x202102a
    ctx->pc = 0x2b693cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b6940: 0x1040001d
    ctx->pc = 0x2B6940u;
    {
        const bool branch_taken_0x2b6940 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6944u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b6940) {
            ctx->pc = 0x2B69B8u;
            goto label_2b69b8;
        }
    }
    ctx->pc = 0x2B6948u;
    // 0x2b6948: 0x24150050
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b694c: 0x4480b000
    ctx->pc = 0x2b694cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x2b6950: 0x2151018
    ctx->pc = 0x2b6950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b6954: 0x0
    ctx->pc = 0x2b6954u;
    // NOP
label_2b6958:
    // 0x2b6958: 0x512021
    ctx->pc = 0x2b6958u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b695c: 0xc0ad1d2
    ctx->pc = 0x2B695Cu;
    SET_GPR_U32(ctx, 31, 0x2B6964u);
    ctx->pc = 0x2B6960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6964u; }
    }
    if (ctx->pc != 0x2B6964u) { return; }
    ctx->pc = 0x2B6964u;
    // 0x2b6964: 0x4600a841
    ctx->pc = 0x2b6964u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2b6968: 0x4601b036
    ctx->pc = 0x2b6968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b696c: 0x0
    ctx->pc = 0x2b696cu;
    // NOP
    // 0x2b6970: 0x4502000d
    ctx->pc = 0x2B6970u;
    {
        const bool branch_taken_0x2b6970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6970) {
            ctx->pc = 0x2B6974u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B69A8u;
            goto label_2b69a8;
        }
    }
    ctx->pc = 0x2B6978u;
    // 0x2b6978: 0x4616a034
    ctx->pc = 0x2b6978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b697c: 0x0
    ctx->pc = 0x2b697cu;
    // NOP
    // 0x2b6980: 0x45030006
    ctx->pc = 0x2B6980u;
    {
        const bool branch_taken_0x2b6980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6980) {
            ctx->pc = 0x2B6984u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2B699Cu;
            goto label_2b699c;
        }
    }
    ctx->pc = 0x2B6988u;
    // 0x2b6988: 0x46140834
    ctx->pc = 0x2b6988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b698c: 0x0
    ctx->pc = 0x2b698cu;
    // NOP
    // 0x2b6990: 0x45020005
    ctx->pc = 0x2B6990u;
    {
        const bool branch_taken_0x2b6990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6990) {
            ctx->pc = 0x2B6994u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B69A8u;
            goto label_2b69a8;
        }
    }
    ctx->pc = 0x2B6998u;
    // 0x2b6998: 0x200982d
    ctx->pc = 0x2b6998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b699c:
    // 0x2b699c: 0x46000d06
    ctx->pc = 0x2b699cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x2b69a0: 0x460005c6
    ctx->pc = 0x2b69a0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2b69a4: 0x26100001
    ctx->pc = 0x2b69a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2b69a8:
    // 0x2b69a8: 0x8e42000c
    ctx->pc = 0x2b69a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b69ac: 0x202102a
    ctx->pc = 0x2b69acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b69b0: 0x1440ffe9
    ctx->pc = 0x2B69B0u;
    {
        const bool branch_taken_0x2b69b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B69B4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2b69b0) {
            ctx->pc = 0x2B6958u;
            goto label_2b6958;
        }
    }
    ctx->pc = 0x2B69B8u;
label_2b69b8:
    // 0x2b69b8: 0x44800000
    ctx->pc = 0x2b69b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2b69bc: 0x4600a034
    ctx->pc = 0x2b69bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b69c0: 0x0
    ctx->pc = 0x2b69c0u;
    // NOP
    // 0x2b69c4: 0x45020005
    ctx->pc = 0x2B69C4u;
    {
        const bool branch_taken_0x2b69c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b69c4) {
            ctx->pc = 0x2B69C8u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
            ctx->pc = 0x2B69DCu;
            goto label_2b69dc;
        }
    }
    ctx->pc = 0x2B69CCu;
    // 0x2b69cc: 0xe7b50060
    ctx->pc = 0x2b69ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b69d0: 0xe7a000b0
    ctx->pc = 0x2b69d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b69d4: 0x10000003
    ctx->pc = 0x2B69D4u;
    {
        const bool branch_taken_0x2b69d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B69D8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x2b69d4) {
            ctx->pc = 0x2B69E4u;
            goto label_2b69e4;
        }
    }
    ctx->pc = 0x2B69DCu;
label_2b69dc:
    // 0x2b69dc: 0xe7b700b0
    ctx->pc = 0x2b69dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b69e0: 0xafb30010
    ctx->pc = 0x2b69e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
label_2b69e4:
    // 0x2b69e4: 0xafa00050
    ctx->pc = 0x2b69e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2b69e8: 0xafa000a0
    ctx->pc = 0x2b69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2b69ec: 0x24020001
    ctx->pc = 0x2b69ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b69f0: 0xafa20000
    ctx->pc = 0x2b69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b69f4: 0x8e240000
    ctx->pc = 0x2b69f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b69f8: 0x54820008
    ctx->pc = 0x2B69F8u;
    {
        const bool branch_taken_0x2b69f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b69f8) {
            ctx->pc = 0x2B69FCu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2B6A1Cu;
            goto label_2b6a1c;
        }
    }
    ctx->pc = 0x2B6A00u;
    // 0x2b6a00: 0xafa40050
    ctx->pc = 0x2b6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b6a04: 0xafa400a0
    ctx->pc = 0x2b6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2b6a08: 0x4600a024
    ctx->pc = 0x2b6a08u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x2b6a0c: 0xe7a00060
    ctx->pc = 0x2b6a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b6a10: 0x4600b824
    ctx->pc = 0x2b6a10u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[23]);
    // 0x2b6a14: 0xe7a000b0
    ctx->pc = 0x2b6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b6a18: 0x3c04003b
    ctx->pc = 0x2b6a18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b6a1c:
    // 0x2b6a1c: 0x24844e80
    ctx->pc = 0x2b6a1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20096));
    // 0x2b6a20: 0xc0ad2fc
    ctx->pc = 0x2B6A20u;
    SET_GPR_U32(ctx, 31, 0x2B6A28u);
    ctx->pc = 0x2B6A24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A28u; }
    }
    if (ctx->pc != 0x2B6A28u) { return; }
    ctx->pc = 0x2B6A28u;
    // 0x2b6a28: 0x3c04003b
    ctx->pc = 0x2b6a28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6a2c: 0x24844e90
    ctx->pc = 0x2b6a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20112));
    // 0x2b6a30: 0xc0ad2fc
    ctx->pc = 0x2B6A30u;
    SET_GPR_U32(ctx, 31, 0x2B6A38u);
    ctx->pc = 0x2B6A34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A38u; }
    }
    if (ctx->pc != 0x2B6A38u) { return; }
    ctx->pc = 0x2B6A38u;
    // 0x2b6a38: 0x3c04003b
    ctx->pc = 0x2b6a38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6a3c: 0x24844ea0
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20128));
    // 0x2b6a40: 0xc0ad2fc
    ctx->pc = 0x2B6A40u;
    SET_GPR_U32(ctx, 31, 0x2B6A48u);
    ctx->pc = 0x2B6A44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A48u; }
    }
    if (ctx->pc != 0x2B6A48u) { return; }
    ctx->pc = 0x2B6A48u;
    // 0x2b6a48: 0x8e420004
    ctx->pc = 0x2b6a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b6a4c: 0x80440006
    ctx->pc = 0x2b6a4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b6a50: 0x24020069
    ctx->pc = 0x2b6a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 105));
    // 0x2b6a54: 0x1082000c
    ctx->pc = 0x2B6A54u;
    {
        const bool branch_taken_0x2b6a54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6A58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 106));
        if (branch_taken_0x2b6a54) {
            ctx->pc = 0x2B6A88u;
            goto label_2b6a88;
        }
    }
    ctx->pc = 0x2B6A5Cu;
    // 0x2b6a5c: 0x10400005
    ctx->pc = 0x2B6A5Cu;
    {
        const bool branch_taken_0x2b6a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6A60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x2b6a5c) {
            ctx->pc = 0x2B6A74u;
            goto label_2b6a74;
        }
    }
    ctx->pc = 0x2B6A64u;
    // 0x2b6a64: 0x10820034
    ctx->pc = 0x2B6A64u;
    {
        const bool branch_taken_0x2b6a64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6A68u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x2b6a64) {
            ctx->pc = 0x2B6B38u;
            goto label_2b6b38;
        }
    }
    ctx->pc = 0x2B6A6Cu;
    // 0x2b6a6c: 0x10000049
    ctx->pc = 0x2B6A6Cu;
    {
        const bool branch_taken_0x2b6a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6A70u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        if (branch_taken_0x2b6a6c) {
            ctx->pc = 0x2B6B94u;
            goto label_2b6b94;
        }
    }
    ctx->pc = 0x2B6A74u;
label_2b6a74:
    // 0x2b6a74: 0x2402006f
    ctx->pc = 0x2b6a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 111));
    // 0x2b6a78: 0x10820019
    ctx->pc = 0x2B6A78u;
    {
        const bool branch_taken_0x2b6a78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6A7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x2b6a78) {
            ctx->pc = 0x2B6AE0u;
            goto label_2b6ae0;
        }
    }
    ctx->pc = 0x2B6A80u;
    // 0x2b6a80: 0x10000044
    ctx->pc = 0x2B6A80u;
    {
        const bool branch_taken_0x2b6a80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6A84u;
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        if (branch_taken_0x2b6a80) {
            ctx->pc = 0x2B6B94u;
            goto label_2b6b94;
        }
    }
    ctx->pc = 0x2B6A88u;
label_2b6a88:
    // 0x2b6a88: 0x280182d
    ctx->pc = 0x2b6a88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a8c: 0x3a0102d
    ctx->pc = 0x2b6a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a90: 0x27a40040
    ctx->pc = 0x2b6a90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
label_2b6a94:
    // 0x2b6a94: 0xdc450000
    ctx->pc = 0x2b6a94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6a98: 0xdc460008
    ctx->pc = 0x2b6a98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6a9c: 0xdc470010
    ctx->pc = 0x2b6a9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6aa0: 0xdc480018
    ctx->pc = 0x2b6aa0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6aa4: 0xfc650000
    ctx->pc = 0x2b6aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x2b6aa8: 0xfc660008
    ctx->pc = 0x2b6aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2b6aac: 0xfc670010
    ctx->pc = 0x2b6aacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x2b6ab0: 0xfc680018
    ctx->pc = 0x2b6ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x2b6ab4: 0x24420020
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6ab8: 0x24630020
    ctx->pc = 0x2b6ab8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b6abc: 0x0
    ctx->pc = 0x2b6abcu;
    // NOP
    // 0x2b6ac0: 0x0
    ctx->pc = 0x2b6ac0u;
    // NOP
    // 0x2b6ac4: 0x1444fff3
    ctx->pc = 0x2B6AC4u;
    {
        const bool branch_taken_0x2b6ac4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2b6ac4) {
            ctx->pc = 0x2B6A94u;
            goto label_2b6a94;
        }
    }
    ctx->pc = 0x2B6ACCu;
    // 0x2b6acc: 0xdc440000
    ctx->pc = 0x2b6accu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6ad0: 0xdc450008
    ctx->pc = 0x2b6ad0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6ad4: 0xfc640000
    ctx->pc = 0x2b6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x2b6ad8: 0x1000002c
    ctx->pc = 0x2B6AD8u;
    {
        const bool branch_taken_0x2b6ad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6ADCu;
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
        if (branch_taken_0x2b6ad8) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6AE0u;
label_2b6ae0:
    // 0x2b6ae0: 0x280182d
    ctx->pc = 0x2b6ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ae4: 0x27a20050
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6ae8: 0x27a40090
    ctx->pc = 0x2b6ae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
label_2b6aec:
    // 0x2b6aec: 0xdc480000
    ctx->pc = 0x2b6aecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6af0: 0xdc450008
    ctx->pc = 0x2b6af0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6af4: 0xdc460010
    ctx->pc = 0x2b6af4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6af8: 0xdc470018
    ctx->pc = 0x2b6af8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6afc: 0xfc680000
    ctx->pc = 0x2b6afcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x2b6b00: 0xfc650008
    ctx->pc = 0x2b6b00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x2b6b04: 0xfc660010
    ctx->pc = 0x2b6b04u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x2b6b08: 0xfc670018
    ctx->pc = 0x2b6b08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x2b6b0c: 0x24420020
    ctx->pc = 0x2b6b0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6b10: 0x24630020
    ctx->pc = 0x2b6b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b6b14: 0x0
    ctx->pc = 0x2b6b14u;
    // NOP
    // 0x2b6b18: 0x0
    ctx->pc = 0x2b6b18u;
    // NOP
    // 0x2b6b1c: 0x1444fff3
    ctx->pc = 0x2B6B1Cu;
    {
        const bool branch_taken_0x2b6b1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2b6b1c) {
            ctx->pc = 0x2B6AECu;
            goto label_2b6aec;
        }
    }
    ctx->pc = 0x2B6B24u;
    // 0x2b6b24: 0xdc480000
    ctx->pc = 0x2b6b24u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b28: 0xdc440008
    ctx->pc = 0x2b6b28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6b2c: 0xfc680000
    ctx->pc = 0x2b6b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x2b6b30: 0x10000016
    ctx->pc = 0x2B6B30u;
    {
        const bool branch_taken_0x2b6b30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6B34u;
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
        if (branch_taken_0x2b6b30) {
            ctx->pc = 0x2B6B8Cu;
            goto label_2b6b8c;
        }
    }
    ctx->pc = 0x2B6B38u;
label_2b6b38:
    // 0x2b6b38: 0x280182d
    ctx->pc = 0x2b6b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b3c: 0x27a200a0
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b6b40: 0x27a400e0
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 224));
label_2b6b44:
    // 0x2b6b44: 0xdc470000
    ctx->pc = 0x2b6b44u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b48: 0xdc480008
    ctx->pc = 0x2b6b48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6b4c: 0xdc450010
    ctx->pc = 0x2b6b4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6b50: 0xdc460018
    ctx->pc = 0x2b6b50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6b54: 0xfc670000
    ctx->pc = 0x2b6b54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x2b6b58: 0xfc680008
    ctx->pc = 0x2b6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x2b6b5c: 0xfc650010
    ctx->pc = 0x2b6b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2b6b60: 0xfc660018
    ctx->pc = 0x2b6b60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x2b6b64: 0x24420020
    ctx->pc = 0x2b6b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6b68: 0x24630020
    ctx->pc = 0x2b6b68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2b6b6c: 0x0
    ctx->pc = 0x2b6b6cu;
    // NOP
    // 0x2b6b70: 0x0
    ctx->pc = 0x2b6b70u;
    // NOP
    // 0x2b6b74: 0x1444fff3
    ctx->pc = 0x2B6B74u;
    {
        const bool branch_taken_0x2b6b74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2b6b74) {
            ctx->pc = 0x2B6B44u;
            goto label_2b6b44;
        }
    }
    ctx->pc = 0x2B6B7Cu;
    // 0x2b6b7c: 0xdc470000
    ctx->pc = 0x2b6b7cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b80: 0xdc480008
    ctx->pc = 0x2b6b80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6b84: 0xfc670000
    ctx->pc = 0x2b6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x2b6b88: 0xfc680008
    ctx->pc = 0x2b6b88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
label_2b6b8c:
    // 0x2b6b8c: 0xdfbf0150
    ctx->pc = 0x2b6b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2b6b90: 0xdfb50140
    ctx->pc = 0x2b6b90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2b6b94:
    // 0x2b6b94: 0xdfb40130
    ctx->pc = 0x2b6b94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b6b98: 0xdfb30120
    ctx->pc = 0x2b6b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b6b9c: 0xdfb20110
    ctx->pc = 0x2b6b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b6ba0: 0xdfb10100
    ctx->pc = 0x2b6ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b6ba4: 0xdfb000f0
    ctx->pc = 0x2b6ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b6ba8: 0xc7b70178
    ctx->pc = 0x2b6ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b6bac: 0xc7b60170
    ctx->pc = 0x2b6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b6bb0: 0xc7b50168
    ctx->pc = 0x2b6bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6bb4: 0xc7b40160
    ctx->pc = 0x2b6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6bb8: 0x3e00008
    ctx->pc = 0x2B6BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6958u: goto label_2b6958;
            case 0x2B699Cu: goto label_2b699c;
            case 0x2B69A8u: goto label_2b69a8;
            case 0x2B69B8u: goto label_2b69b8;
            case 0x2B69DCu: goto label_2b69dc;
            case 0x2B69E4u: goto label_2b69e4;
            case 0x2B6A1Cu: goto label_2b6a1c;
            case 0x2B6A74u: goto label_2b6a74;
            case 0x2B6A88u: goto label_2b6a88;
            case 0x2B6A94u: goto label_2b6a94;
            case 0x2B6AE0u: goto label_2b6ae0;
            case 0x2B6AECu: goto label_2b6aec;
            case 0x2B6B38u: goto label_2b6b38;
            case 0x2B6B44u: goto label_2b6b44;
            case 0x2B6B8Cu: goto label_2b6b8c;
            case 0x2B6B94u: goto label_2b6b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B6BC0u;
}
