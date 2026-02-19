#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CTriListCollide
// Address: 0x21d638 - 0x21da40
void CTriListCollide_0x21d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21d638u;

    // 0x21d638: 0x27bdff10
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x21d63c: 0xffbf00c0
    ctx->pc = 0x21d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x21d640: 0xffbe00b0
    ctx->pc = 0x21d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x21d644: 0xffb700a0
    ctx->pc = 0x21d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x21d648: 0xffb60090
    ctx->pc = 0x21d648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x21d64c: 0xffb50080
    ctx->pc = 0x21d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x21d650: 0xffb40070
    ctx->pc = 0x21d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x21d654: 0xffb30060
    ctx->pc = 0x21d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x21d658: 0xffb20050
    ctx->pc = 0x21d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x21d65c: 0xffb10040
    ctx->pc = 0x21d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x21d660: 0xffb00030
    ctx->pc = 0x21d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21d664: 0xe7b700e8
    ctx->pc = 0x21d664u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21d668: 0xe7b600e0
    ctx->pc = 0x21d668u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21d66c: 0xe7b500d8
    ctx->pc = 0x21d66cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x21d670: 0xe7b400d0
    ctx->pc = 0x21d670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x21d674: 0x80b82d
    ctx->pc = 0x21d674u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d678: 0xa0f02d
    ctx->pc = 0x21d678u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d67c: 0x460065c6
    ctx->pc = 0x21d67cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x21d680: 0xc0982d
    ctx->pc = 0x21d680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d684: 0xe0b02d
    ctx->pc = 0x21d684u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d688: 0x100882d
    ctx->pc = 0x21d688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d68c: 0xafa90020
    ctx->pc = 0x21d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x21d690: 0xafaa0024
    ctx->pc = 0x21d690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x21d694: 0xafab0028
    ctx->pc = 0x21d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x21d698: 0x40024800
    ctx->pc = 0x21d698u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21d69c: 0x3c03003a
    ctx->pc = 0x21d69cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x21d6a0: 0x8c6321d0
    ctx->pc = 0x21d6a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8656)));
    // 0x21d6a4: 0xac620098
    ctx->pc = 0x21d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
    // 0x21d6a8: 0x3c01bf80
    ctx->pc = 0x21d6a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x21d6ac: 0x4481a800
    ctx->pc = 0x21d6acu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x21d6b0: 0x3c016258
    ctx->pc = 0x21d6b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x21d6b4: 0x3421d727
    ctx->pc = 0x21d6b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x21d6b8: 0x4481b000
    ctx->pc = 0x21d6b8u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x21d6bc: 0x1bc000c4
    ctx->pc = 0x21D6BCu;
    {
        const bool branch_taken_0x21d6bc = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x21D6C0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21d6bc) {
            ctx->pc = 0x21D9D0u;
            goto label_21d9d0;
        }
    }
    ctx->pc = 0x21D6C4u;
    // 0x21d6c4: 0x3c15003a
    ctx->pc = 0x21d6c4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x21d6c8: 0x4480a000
    ctx->pc = 0x21d6c8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x21d6cc: 0x3c020032
    ctx->pc = 0x21d6ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d6d0: 0x2454f9d0
    ctx->pc = 0x21d6d0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294965712));
    // 0x21d6d4: 0x0
    ctx->pc = 0x21d6d4u;
    // NOP
label_21d6d8:
    // 0x21d6d8: 0x12c00005
    ctx->pc = 0x21D6D8u;
    {
        const bool branch_taken_0x21d6d8 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D6DCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x21d6d8) {
            ctx->pc = 0x21D6F0u;
            goto label_21d6f0;
        }
    }
    ctx->pc = 0x21D6E0u;
    // 0x21d6e0: 0x561021
    ctx->pc = 0x21d6e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x21d6e4: 0x84420000
    ctx->pc = 0x21d6e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d6e8: 0x10000002
    ctx->pc = 0x21D6E8u;
    {
        const bool branch_taken_0x21d6e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D6ECu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        if (branch_taken_0x21d6e8) {
            ctx->pc = 0x21D6F4u;
            goto label_21d6f4;
        }
    }
    ctx->pc = 0x21D6F0u;
label_21d6f0:
    // 0x21d6f0: 0x2f22821
    ctx->pc = 0x21d6f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_21d6f4:
    // 0x21d6f4: 0x3c020032
    ctx->pc = 0x21d6f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d6f8: 0x2447f9f8
    ctx->pc = 0x21d6f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21d6fc: 0x8ce2005c
    ctx->pc = 0x21d6fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x21d700: 0x453021
    ctx->pc = 0x21d700u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21d704: 0x80c30000
    ctx->pc = 0x21d704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21d708: 0x3c020032
    ctx->pc = 0x21d708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d70c: 0x9044fd38
    ctx->pc = 0x21d70cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966584)));
    // 0x21d710: 0x8042fd38
    ctx->pc = 0x21d710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966584)));
    // 0x21d714: 0x106200aa
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21D718u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21D9C0u;
            goto label_21d9c0;
        }
    }
    ctx->pc = 0x21D71Cu;
    // 0x21d71c: 0xa0c40000
    ctx->pc = 0x21d71cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d720: 0xa21018
    ctx->pc = 0x21d720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21d724: 0x8ce30008
    ctx->pc = 0x21d724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x21d728: 0x438021
    ctx->pc = 0x21d728u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d72c: 0x8fa30028
    ctx->pc = 0x21d72cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d730: 0x14600019
    ctx->pc = 0x21D730u;
    {
        const bool branch_taken_0x21d730 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21D734u;
        SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
        if (branch_taken_0x21d730) {
            ctx->pc = 0x21D798u;
            goto label_21d798;
        }
    }
    ctx->pc = 0x21D738u;
    // 0x21d738: 0x3c020032
    ctx->pc = 0x21d738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d73c: 0xc601000c
    ctx->pc = 0x21d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d740: 0xc440fd2c
    ctx->pc = 0x21d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d744: 0x46000834
    ctx->pc = 0x21d744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d748: 0x0
    ctx->pc = 0x21d748u;
    // NOP
    // 0x21d74c: 0x4503009d
    ctx->pc = 0x21D74Cu;
    {
        const bool branch_taken_0x21d74c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d74c) {
            ctx->pc = 0x21D750u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D754u;
    // 0x21d754: 0x3c020032
    ctx->pc = 0x21d754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d758: 0xc440fd30
    ctx->pc = 0x21d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d75c: 0x46010034
    ctx->pc = 0x21d75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d760: 0x0
    ctx->pc = 0x21d760u;
    // NOP
    // 0x21d764: 0x45030097
    ctx->pc = 0x21D764u;
    {
        const bool branch_taken_0x21d764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d764) {
            ctx->pc = 0x21D768u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D76Cu;
    // 0x21d76c: 0x86020002
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x21d770: 0x8fa80020
    ctx->pc = 0x21d770u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d774: 0x48102a
    ctx->pc = 0x21d774u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 8)));
    // 0x21d778: 0x54400092
    ctx->pc = 0x21D778u;
    {
        const bool branch_taken_0x21d778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d778) {
            ctx->pc = 0x21D77Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D780u;
    // 0x21d780: 0x86020000
    ctx->pc = 0x21d780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21d784: 0x8fa30024
    ctx->pc = 0x21d784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x21d788: 0x62102a
    ctx->pc = 0x21d788u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x21d78c: 0x5440008d
    ctx->pc = 0x21D78Cu;
    {
        const bool branch_taken_0x21d78c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d78c) {
            ctx->pc = 0x21D790u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D794u;
    // 0x21d794: 0x3c080032
    ctx->pc = 0x21d794u;
    SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
label_21d798:
    // 0x21d798: 0x8d02fd3c
    ctx->pc = 0x21d798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294966588)));
    // 0x21d79c: 0x30420020
    ctx->pc = 0x21d79cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21d7a0: 0x10400017
    ctx->pc = 0x21D7A0u;
    {
        const bool branch_taken_0x21d7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21d7a0) {
            ctx->pc = 0x21D800u;
            goto label_21d800;
        }
    }
    ctx->pc = 0x21D7A8u;
    // 0x21d7a8: 0x40034800
    ctx->pc = 0x21d7a8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21d7ac: 0x8ea221d0
    ctx->pc = 0x21d7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8656)));
    // 0x21d7b0: 0xac4300b8
    ctx->pc = 0x21d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 3));
    // 0x21d7b4: 0x200202d
    ctx->pc = 0x21d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7b8: 0xc086dbe
    ctx->pc = 0x21D7B8u;
    SET_GPR_U32(ctx, 31, 0x21D7C0u);
    ctx->pc = 0x21D7BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x21B6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriLineCol_0x21b6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D7C0u; }
    }
    if (ctx->pc != 0x21D7C0u) { return; }
    ctx->pc = 0x21D7C0u;
    // 0x21d7c0: 0x3c01bf80
    ctx->pc = 0x21d7c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x21d7c4: 0x44811800
    ctx->pc = 0x21d7c4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x21d7c8: 0x10400002
    ctx->pc = 0x21D7C8u;
    {
        const bool branch_taken_0x21d7c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21d7c8) {
            ctx->pc = 0x21D7D4u;
            goto label_21d7d4;
        }
    }
    ctx->pc = 0x21D7D0u;
    // 0x21d7d0: 0x44801800
    ctx->pc = 0x21d7d0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
label_21d7d4:
    // 0x21d7d4: 0x40034800
    ctx->pc = 0x21d7d4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21d7d8: 0x8ea421d0
    ctx->pc = 0x21d7d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 8656)));
    // 0x21d7dc: 0x8c8200b8
    ctx->pc = 0x21d7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x21d7e0: 0x621823
    ctx->pc = 0x21d7e0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d7e4: 0x8c8200b0
    ctx->pc = 0x21d7e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x21d7e8: 0x621821
    ctx->pc = 0x21d7e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d7ec: 0xac8300b0
    ctx->pc = 0x21d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 3));
    // 0x21d7f0: 0x8c8200b4
    ctx->pc = 0x21d7f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x21d7f4: 0x24420001
    ctx->pc = 0x21d7f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d7f8: 0x10000013
    ctx->pc = 0x21D7F8u;
    {
        const bool branch_taken_0x21d7f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D7FCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
        if (branch_taken_0x21d7f8) {
            ctx->pc = 0x21D848u;
            goto label_21d848;
        }
    }
    ctx->pc = 0x21D800u;
label_21d800:
    // 0x21d800: 0x40034800
    ctx->pc = 0x21d800u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21d804: 0x8ea221d0
    ctx->pc = 0x21d804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8656)));
    // 0x21d808: 0xac4300a8
    ctx->pc = 0x21d808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x21d80c: 0x200202d
    ctx->pc = 0x21d80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d810: 0x27a50010
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d814: 0xc086bee
    ctx->pc = 0x21D814u;
    SET_GPR_U32(ctx, 31, 0x21D81Cu);
    ctx->pc = 0x21D818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->pc = 0x21AFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BTriLineCol_0x21afb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D81Cu; }
    }
    if (ctx->pc != 0x21D81Cu) { return; }
    ctx->pc = 0x21D81Cu;
    // 0x21d81c: 0x460000c6
    ctx->pc = 0x21d81cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x21d820: 0x40034800
    ctx->pc = 0x21d820u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21d824: 0x8ea421d0
    ctx->pc = 0x21d824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 8656)));
    // 0x21d828: 0x8c8200a8
    ctx->pc = 0x21d828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x21d82c: 0x621823
    ctx->pc = 0x21d82cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d830: 0x8c8200a0
    ctx->pc = 0x21d830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x21d834: 0x621821
    ctx->pc = 0x21d834u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d838: 0xac8300a0
    ctx->pc = 0x21d838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
    // 0x21d83c: 0x8c8200a4
    ctx->pc = 0x21d83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x21d840: 0x24420001
    ctx->pc = 0x21d840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d844: 0xac8200a4
    ctx->pc = 0x21d844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 2));
label_21d848:
    // 0x21d848: 0x4603a036
    ctx->pc = 0x21d848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d84c: 0x0
    ctx->pc = 0x21d84cu;
    // NOP
    // 0x21d850: 0x4500005b
    ctx->pc = 0x21D850u;
    {
        const bool branch_taken_0x21d850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D854u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x21d850) {
            ctx->pc = 0x21D9C0u;
            goto label_21d9c0;
        }
    }
    ctx->pc = 0x21D858u;
    // 0x21d858: 0x8c62fd3c
    ctx->pc = 0x21d858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966588)));
    // 0x21d85c: 0x30420020
    ctx->pc = 0x21d85cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21d860: 0x1040000c
    ctx->pc = 0x21D860u;
    {
        const bool branch_taken_0x21d860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D864u;
        SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
        if (branch_taken_0x21d860) {
            ctx->pc = 0x21D894u;
            goto label_21d894;
        }
    }
    ctx->pc = 0x21D868u;
    // 0x21d868: 0x12600002
    ctx->pc = 0x21D868u;
    {
        const bool branch_taken_0x21d868 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D86Cu;
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        if (branch_taken_0x21d868) {
            ctx->pc = 0x21D874u;
            goto label_21d874;
        }
    }
    ctx->pc = 0x21D870u;
    // 0x21d870: 0xae700000
    ctx->pc = 0x21d870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_21d874:
    // 0x21d874: 0x12200056
    ctx->pc = 0x21D874u;
    {
        const bool branch_taken_0x21d874 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D878u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21d874) {
            ctx->pc = 0x21D9D0u;
            goto label_21d9d0;
        }
    }
    ctx->pc = 0x21D87Cu;
    // 0x21d87c: 0xe6200000
    ctx->pc = 0x21d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21d880: 0xc7a00014
    ctx->pc = 0x21d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d884: 0xe6200004
    ctx->pc = 0x21d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21d888: 0xc7a00018
    ctx->pc = 0x21d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d88c: 0x10000050
    ctx->pc = 0x21D88Cu;
    {
        const bool branch_taken_0x21d88c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D890u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        if (branch_taken_0x21d88c) {
            ctx->pc = 0x21D9D0u;
            goto label_21d9d0;
        }
    }
    ctx->pc = 0x21D894u;
label_21d894:
    // 0x21d894: 0x8d02fd3c
    ctx->pc = 0x21d894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294966588)));
    // 0x21d898: 0x30420010
    ctx->pc = 0x21d898u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x21d89c: 0x5040000d
    ctx->pc = 0x21D89Cu;
    {
        const bool branch_taken_0x21d89c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21d89c) {
            ctx->pc = 0x21D8A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->pc = 0x21D8D4u;
            goto label_21d8d4;
        }
    }
    ctx->pc = 0x21D8A4u;
    // 0x21d8a4: 0x46141832
    ctx->pc = 0x21d8a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d8a8: 0x0
    ctx->pc = 0x21d8a8u;
    // NOP
    // 0x21d8ac: 0x45000004
    ctx->pc = 0x21D8ACu;
    {
        const bool branch_taken_0x21d8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D8B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21d8ac) {
            ctx->pc = 0x21D8C0u;
            goto label_21d8c0;
        }
    }
    ctx->pc = 0x21D8B4u;
    // 0x21d8b4: 0xc7a30010
    ctx->pc = 0x21d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21d8b8: 0x10000008
    ctx->pc = 0x21D8B8u;
    {
        const bool branch_taken_0x21d8b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D8BCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21d8b8) {
            ctx->pc = 0x21D8DCu;
            goto label_21d8dc;
        }
    }
    ctx->pc = 0x21D8C0u;
label_21d8c0:
    // 0x21d8c0: 0x3c01461c
    ctx->pc = 0x21d8c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x21d8c4: 0x34214000
    ctx->pc = 0x21d8c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x21d8c8: 0x44810000
    ctx->pc = 0x21d8c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d8cc: 0x10000012
    ctx->pc = 0x21D8CCu;
    {
        const bool branch_taken_0x21d8cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D8D0u;
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x21d8cc) {
            ctx->pc = 0x21D918u;
            goto label_21d918;
        }
    }
    ctx->pc = 0x21D8D4u;
label_21d8d4:
    // 0x21d8d4: 0x3c030032
    ctx->pc = 0x21d8d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21d8d8: 0xc460f9d0
    ctx->pc = 0x21d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21d8dc:
    // 0x21d8dc: 0x460018c1
    ctx->pc = 0x21d8dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x21d8e0: 0xe7a30000
    ctx->pc = 0x21d8e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21d8e4: 0xc7a20014
    ctx->pc = 0x21d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21d8e8: 0xc6800004
    ctx->pc = 0x21d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d8ec: 0x46001081
    ctx->pc = 0x21d8ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21d8f0: 0xe7a20004
    ctx->pc = 0x21d8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21d8f4: 0xc7a00018
    ctx->pc = 0x21d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d8f8: 0xc6810008
    ctx->pc = 0x21d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d8fc: 0x46010001
    ctx->pc = 0x21d8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21d900: 0xe7a00008
    ctx->pc = 0x21d900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21d904: 0x460318c2
    ctx->pc = 0x21d904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x21d908: 0x46021082
    ctx->pc = 0x21d908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21d90c: 0x460218c0
    ctx->pc = 0x21d90cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x21d910: 0x46000002
    ctx->pc = 0x21d910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21d914: 0x460018c0
    ctx->pc = 0x21d914u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_21d918:
    // 0x21d918: 0x3c020032
    ctx->pc = 0x21d918u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21d91c: 0xc441fd10
    ctx->pc = 0x21d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d920: 0xc6000008
    ctx->pc = 0x21d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d924: 0x46000882
    ctx->pc = 0x21d924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d928: 0x40402d
    ctx->pc = 0x21d928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d92c: 0x2508fd10
    ctx->pc = 0x21d92cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294966544));
    // 0x21d930: 0xc5000004
    ctx->pc = 0x21d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d934: 0xc601000c
    ctx->pc = 0x21d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d938: 0x46010002
    ctx->pc = 0x21d938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21d93c: 0x46001080
    ctx->pc = 0x21d93cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21d940: 0xc5000008
    ctx->pc = 0x21d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d944: 0xc6010010
    ctx->pc = 0x21d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d948: 0x46010002
    ctx->pc = 0x21d948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21d94c: 0x46001080
    ctx->pc = 0x21d94cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21d950: 0x46141034
    ctx->pc = 0x21d950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d954: 0x0
    ctx->pc = 0x21d954u;
    // NOP
    // 0x21d958: 0x45030001
    ctx->pc = 0x21D958u;
    {
        const bool branch_taken_0x21d958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d958) {
            ctx->pc = 0x21D95Cu;
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->pc = 0x21D960u;
            goto label_21d960;
        }
    }
    ctx->pc = 0x21D960u;
label_21d960:
    // 0x21d960: 0x3c013e80
    ctx->pc = 0x21d960u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x21d964: 0x44810000
    ctx->pc = 0x21d964u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d968: 0x46001034
    ctx->pc = 0x21d968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d96c: 0x45000005
    ctx->pc = 0x21D96Cu;
    {
        const bool branch_taken_0x21d96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d96c) {
            ctx->pc = 0x21D984u;
            goto label_21d984;
        }
    }
    ctx->pc = 0x21D974u;
    // 0x21d974: 0x3c013f73
    ctx->pc = 0x21d974u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16243 << 16));
    // 0x21d978: 0x34213333
    ctx->pc = 0x21d978u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x21d97c: 0x44810000
    ctx->pc = 0x21d97cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21d980: 0x460018c2
    ctx->pc = 0x21d980u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_21d984:
    // 0x21d984: 0x46161834
    ctx->pc = 0x21d984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d988: 0x0
    ctx->pc = 0x21d988u;
    // NOP
    // 0x21d98c: 0x4502000d
    ctx->pc = 0x21D98Cu;
    {
        const bool branch_taken_0x21d98c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d98c) {
            ctx->pc = 0x21D990u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D994u;
    // 0x21d994: 0x46001d86
    ctx->pc = 0x21d994u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
    // 0x21d998: 0x12600002
    ctx->pc = 0x21D998u;
    {
        const bool branch_taken_0x21d998 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D99Cu;
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        if (branch_taken_0x21d998) {
            ctx->pc = 0x21D9A4u;
            goto label_21d9a4;
        }
    }
    ctx->pc = 0x21D9A0u;
    // 0x21d9a0: 0xae700000
    ctx->pc = 0x21d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_21d9a4:
    // 0x21d9a4: 0x12200006
    ctx->pc = 0x21D9A4u;
    {
        const bool branch_taken_0x21d9a4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D9A8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x21d9a4) {
            ctx->pc = 0x21D9C0u;
            goto label_21d9c0;
        }
    }
    ctx->pc = 0x21D9ACu;
    // 0x21d9ac: 0xe6200000
    ctx->pc = 0x21d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21d9b0: 0xc7a00014
    ctx->pc = 0x21d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d9b4: 0xe6200004
    ctx->pc = 0x21d9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21d9b8: 0xc7a00018
    ctx->pc = 0x21d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d9bc: 0xe6200008
    ctx->pc = 0x21d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_21d9c0:
    // 0x21d9c0: 0x26520001
    ctx->pc = 0x21d9c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_21d9c4:
    // 0x21d9c4: 0x25e102a
    ctx->pc = 0x21d9c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 30)));
    // 0x21d9c8: 0x1440ff43
    ctx->pc = 0x21D9C8u;
    {
        const bool branch_taken_0x21d9c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d9c8) {
            ctx->pc = 0x21D6D8u;
            goto label_21d6d8;
        }
    }
    ctx->pc = 0x21D9D0u;
label_21d9d0:
    // 0x21d9d0: 0x40034800
    ctx->pc = 0x21d9d0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x21d9d4: 0x3c02003a
    ctx->pc = 0x21d9d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x21d9d8: 0x8c4421d0
    ctx->pc = 0x21d9d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x21d9dc: 0x8c820098
    ctx->pc = 0x21d9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x21d9e0: 0x621823
    ctx->pc = 0x21d9e0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d9e4: 0x8c820090
    ctx->pc = 0x21d9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x21d9e8: 0x621821
    ctx->pc = 0x21d9e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21d9ec: 0xac830090
    ctx->pc = 0x21d9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x21d9f0: 0x8c820094
    ctx->pc = 0x21d9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x21d9f4: 0x24420001
    ctx->pc = 0x21d9f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d9f8: 0xac820094
    ctx->pc = 0x21d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x21d9fc: 0x4600a806
    ctx->pc = 0x21d9fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x21da00: 0xdfbf00c0
    ctx->pc = 0x21da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21da04: 0xdfbe00b0
    ctx->pc = 0x21da04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21da08: 0xdfb700a0
    ctx->pc = 0x21da08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21da0c: 0xdfb60090
    ctx->pc = 0x21da0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21da10: 0xdfb50080
    ctx->pc = 0x21da10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21da14: 0xdfb40070
    ctx->pc = 0x21da14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21da18: 0xdfb30060
    ctx->pc = 0x21da18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21da1c: 0xdfb20050
    ctx->pc = 0x21da1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21da20: 0xdfb10040
    ctx->pc = 0x21da20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21da24: 0xdfb00030
    ctx->pc = 0x21da24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21da28: 0xc7b700e8
    ctx->pc = 0x21da28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21da2c: 0xc7b600e0
    ctx->pc = 0x21da2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21da30: 0xc7b500d8
    ctx->pc = 0x21da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21da34: 0xc7b400d0
    ctx->pc = 0x21da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21da38: 0x3e00008
    ctx->pc = 0x21DA38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D6D8u: goto label_21d6d8;
            case 0x21D6F0u: goto label_21d6f0;
            case 0x21D6F4u: goto label_21d6f4;
            case 0x21D798u: goto label_21d798;
            case 0x21D7D4u: goto label_21d7d4;
            case 0x21D800u: goto label_21d800;
            case 0x21D848u: goto label_21d848;
            case 0x21D874u: goto label_21d874;
            case 0x21D894u: goto label_21d894;
            case 0x21D8C0u: goto label_21d8c0;
            case 0x21D8D4u: goto label_21d8d4;
            case 0x21D8DCu: goto label_21d8dc;
            case 0x21D918u: goto label_21d918;
            case 0x21D960u: goto label_21d960;
            case 0x21D984u: goto label_21d984;
            case 0x21D9A4u: goto label_21d9a4;
            case 0x21D9C0u: goto label_21d9c0;
            case 0x21D9C4u: goto label_21d9c4;
            case 0x21D9D0u: goto label_21d9d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DA40u;
}
