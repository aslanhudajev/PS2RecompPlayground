#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLineCollide
// Address: 0x29a970 - 0x29ab34
void CritterLineCollide_0x29a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29a970u;

    // 0x29a970: 0x27bdff40
    ctx->pc = 0x29a970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29a974: 0xffbf0090
    ctx->pc = 0x29a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29a978: 0xffbe0080
    ctx->pc = 0x29a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x29a97c: 0xffb70070
    ctx->pc = 0x29a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x29a980: 0xffb60060
    ctx->pc = 0x29a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29a984: 0xffb50050
    ctx->pc = 0x29a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29a988: 0xffb40040
    ctx->pc = 0x29a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29a98c: 0xffb30030
    ctx->pc = 0x29a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29a990: 0xffb20020
    ctx->pc = 0x29a990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29a994: 0xffb10010
    ctx->pc = 0x29a994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29a998: 0xffb00000
    ctx->pc = 0x29a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a99c: 0xe7b600b0
    ctx->pc = 0x29a99cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29a9a0: 0xe7b500a8
    ctx->pc = 0x29a9a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29a9a4: 0xe7b400a0
    ctx->pc = 0x29a9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29a9a8: 0x80902d
    ctx->pc = 0x29a9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9ac: 0xa0882d
    ctx->pc = 0x29a9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9b0: 0xc0b02d
    ctx->pc = 0x29a9b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9b4: 0x46006586
    ctx->pc = 0x29a9b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x29a9b8: 0xe0a82d
    ctx->pc = 0x29a9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9bc: 0x100a02d
    ctx->pc = 0x29a9bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9c0: 0x982d
    ctx->pc = 0x29a9c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9c4: 0xc6220000
    ctx->pc = 0x29a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a9c8: 0xc6400000
    ctx->pc = 0x29a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a9cc: 0x46001081
    ctx->pc = 0x29a9ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29a9d0: 0xc6230004
    ctx->pc = 0x29a9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29a9d4: 0xc6400004
    ctx->pc = 0x29a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a9d8: 0x460018c1
    ctx->pc = 0x29a9d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x29a9dc: 0xc6200008
    ctx->pc = 0x29a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a9e0: 0xc6410008
    ctx->pc = 0x29a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a9e4: 0x46010001
    ctx->pc = 0x29a9e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a9e8: 0x46021502
    ctx->pc = 0x29a9e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x29a9ec: 0x46000002
    ctx->pc = 0x29a9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29a9f0: 0x4600a500
    ctx->pc = 0x29a9f0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29a9f4: 0x3c02003c
    ctx->pc = 0x29a9f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29a9f8: 0x3c030036
    ctx->pc = 0x29a9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29a9fc: 0x8c424170
    ctx->pc = 0x29a9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16752)));
    // 0x29aa00: 0x8c63d4c0
    ctx->pc = 0x29aa00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294956224)));
    // 0x29aa04: 0x43102a
    ctx->pc = 0x29aa04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x29aa08: 0x1040003a
    ctx->pc = 0x29AA08u;
    {
        const bool branch_taken_0x29aa08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AA0Cu;
        ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
        if (branch_taken_0x29aa08) {
            ctx->pc = 0x29AAF4u;
            goto label_29aaf4;
        }
    }
    ctx->pc = 0x29AA10u;
    // 0x29aa10: 0x3c17003c
    ctx->pc = 0x29aa10u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x29aa14: 0x3c1e0036
    ctx->pc = 0x29aa14u;
    SET_GPR_U32(ctx, 30, ((uint32_t)54 << 16));
    // 0x29aa18: 0x8ee24170
    ctx->pc = 0x29aa18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16752)));
    // 0x29aa1c: 0x0
    ctx->pc = 0x29aa1cu;
    // NOP
label_29aa20:
    // 0x29aa20: 0x3c030035
    ctx->pc = 0x29aa20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x29aa24: 0x24631dc0
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7616));
    // 0x29aa28: 0x600013
    ctx->pc = 0x29aa28u;
    ctx->lo = GPR_U32(ctx, 3);
    // 0x29aa2c: 0x24030b70
    ctx->pc = 0x29aa2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x29aa30: 0x70438000
    ctx->pc = 0x29aa30u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29aa34: 0x24420001
    ctx->pc = 0x29aa34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x29aa38: 0xaee24170
    ctx->pc = 0x29aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16752), GPR_U32(ctx, 2));
    // 0x29aa3c: 0x8e020004
    ctx->pc = 0x29aa3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29aa40: 0x10400026
    ctx->pc = 0x29AA40u;
    {
        const bool branch_taken_0x29aa40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AA44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29aa40) {
            ctx->pc = 0x29AADCu;
            goto label_29aadc;
        }
    }
    ctx->pc = 0x29AA48u;
    // 0x29aa48: 0x8c424174
    ctx->pc = 0x29aa48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16756)));
    // 0x29aa4c: 0x12020024
    ctx->pc = 0x29AA4Cu;
    {
        const bool branch_taken_0x29aa4c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x29AA50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29aa4c) {
            ctx->pc = 0x29AAE0u;
            goto label_29aae0;
        }
    }
    ctx->pc = 0x29AA54u;
    // 0x29aa54: 0x6a00005
    ctx->pc = 0x29AA54u;
    {
        const bool branch_taken_0x29aa54 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x29AA58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29aa54) {
            ctx->pc = 0x29AA6Cu;
            goto label_29aa6c;
        }
    }
    ctx->pc = 0x29AA5Cu;
    // 0x29aa5c: 0xc0a682c
    ctx->pc = 0x29AA5Cu;
    SET_GPR_U32(ctx, 31, 0x29AA64u);
    ctx->pc = 0x29AA60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHit_0x29a0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AA64u; }
    }
    if (ctx->pc != 0x29AA64u) { return; }
    ctx->pc = 0x29AA64u;
    // 0x29aa64: 0x1440001e
    ctx->pc = 0x29AA64u;
    {
        const bool branch_taken_0x29aa64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AA68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x29aa64) {
            ctx->pc = 0x29AAE0u;
            goto label_29aae0;
        }
    }
    ctx->pc = 0x29AA6Cu;
label_29aa6c:
    // 0x29aa6c: 0x8e020004
    ctx->pc = 0x29aa6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29aa70: 0x8c42005c
    ctx->pc = 0x29aa70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29aa74: 0x30420002
    ctx->pc = 0x29aa74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x29aa78: 0x1040000a
    ctx->pc = 0x29AA78u;
    {
        const bool branch_taken_0x29aa78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29AA7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29aa78) {
            ctx->pc = 0x29AAA4u;
            goto label_29aaa4;
        }
    }
    ctx->pc = 0x29AA80u;
    // 0x29aa80: 0x240282d
    ctx->pc = 0x29aa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa84: 0x220302d
    ctx->pc = 0x29aa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa88: 0x2c0382d
    ctx->pc = 0x29aa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa8c: 0x4600b306
    ctx->pc = 0x29aa8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29aa90: 0x4600a346
    ctx->pc = 0x29aa90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29aa94: 0x4600ab86
    ctx->pc = 0x29aa94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x29aa98: 0xc0a6972
    ctx->pc = 0x29AA98u;
    SET_GPR_U32(ctx, 31, 0x29AAA0u);
    ctx->pc = 0x29AA9Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineNodeColSub_0x29a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAA0u; }
    }
    if (ctx->pc != 0x29AAA0u) { return; }
    ctx->pc = 0x29AAA0u;
    // 0x29aaa0: 0x40982d
    ctx->pc = 0x29aaa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29aaa4:
    // 0x29aaa4: 0x16600014
    ctx->pc = 0x29AAA4u;
    {
        const bool branch_taken_0x29aaa4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AAA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29aaa4) {
            ctx->pc = 0x29AAF8u;
            goto label_29aaf8;
        }
    }
    ctx->pc = 0x29AAACu;
    // 0x29aaac: 0x200202d
    ctx->pc = 0x29aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aab0: 0x240282d
    ctx->pc = 0x29aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aab4: 0x220302d
    ctx->pc = 0x29aab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aab8: 0x2c0382d
    ctx->pc = 0x29aab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aabc: 0x4600b306
    ctx->pc = 0x29aabcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29aac0: 0x4600a346
    ctx->pc = 0x29aac0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29aac4: 0x4600ab86
    ctx->pc = 0x29aac4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x29aac8: 0xc0a694e
    ctx->pc = 0x29AAC8u;
    SET_GPR_U32(ctx, 31, 0x29AAD0u);
    ctx->pc = 0x29AACCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A538u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineRootColSub_0x29a538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAD0u; }
    }
    if (ctx->pc != 0x29AAD0u) { return; }
    ctx->pc = 0x29AAD0u;
    // 0x29aad0: 0x40982d
    ctx->pc = 0x29aad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aad4: 0x16600008
    ctx->pc = 0x29AAD4u;
    {
        const bool branch_taken_0x29aad4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AAD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29aad4) {
            ctx->pc = 0x29AAF8u;
            goto label_29aaf8;
        }
    }
    ctx->pc = 0x29AADCu;
label_29aadc:
    // 0x29aadc: 0x3c02003c
    ctx->pc = 0x29aadcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_29aae0:
    // 0x29aae0: 0x8c424170
    ctx->pc = 0x29aae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16752)));
    // 0x29aae4: 0x8fc3d4c0
    ctx->pc = 0x29aae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4294956224)));
    // 0x29aae8: 0x43102a
    ctx->pc = 0x29aae8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x29aaec: 0x1440ffcc
    ctx->pc = 0x29AAECu;
    {
        const bool branch_taken_0x29aaec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AAF0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 16752)));
        if (branch_taken_0x29aaec) {
            ctx->pc = 0x29AA20u;
            goto label_29aa20;
        }
    }
    ctx->pc = 0x29AAF4u;
label_29aaf4:
    // 0x29aaf4: 0x102d
    ctx->pc = 0x29aaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29aaf8:
    // 0x29aaf8: 0xdfbf0090
    ctx->pc = 0x29aaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29aafc: 0xdfbe0080
    ctx->pc = 0x29aafcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ab00: 0xdfb70070
    ctx->pc = 0x29ab00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ab04: 0xdfb60060
    ctx->pc = 0x29ab04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ab08: 0xdfb50050
    ctx->pc = 0x29ab08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ab0c: 0xdfb40040
    ctx->pc = 0x29ab0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ab10: 0xdfb30030
    ctx->pc = 0x29ab10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ab14: 0xdfb20020
    ctx->pc = 0x29ab14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ab18: 0xdfb10010
    ctx->pc = 0x29ab18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab1c: 0xdfb00000
    ctx->pc = 0x29ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ab20: 0xc7b600b0
    ctx->pc = 0x29ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29ab24: 0xc7b500a8
    ctx->pc = 0x29ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ab28: 0xc7b400a0
    ctx->pc = 0x29ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ab2c: 0x3e00008
    ctx->pc = 0x29AB2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AA20u: goto label_29aa20;
            case 0x29AA6Cu: goto label_29aa6c;
            case 0x29AAA4u: goto label_29aaa4;
            case 0x29AADCu: goto label_29aadc;
            case 0x29AAE0u: goto label_29aae0;
            case 0x29AAF4u: goto label_29aaf4;
            case 0x29AAF8u: goto label_29aaf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AB34u;
}
