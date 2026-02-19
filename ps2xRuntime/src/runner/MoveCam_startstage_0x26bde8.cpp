#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MoveCam_startstage
// Address: 0x26bde8 - 0x26c30c
void MoveCam_startstage_0x26bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26bde8u;

    // 0x26bde8: 0x27bdff70
    ctx->pc = 0x26bde8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26bdec: 0xffbf0070
    ctx->pc = 0x26bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26bdf0: 0xffb50060
    ctx->pc = 0x26bdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26bdf4: 0xffb40050
    ctx->pc = 0x26bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26bdf8: 0xffb30040
    ctx->pc = 0x26bdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26bdfc: 0xffb20030
    ctx->pc = 0x26bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26be00: 0xffb10020
    ctx->pc = 0x26be00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26be04: 0xffb00010
    ctx->pc = 0x26be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26be08: 0xe7b40080
    ctx->pc = 0x26be08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26be0c: 0x80982d
    ctx->pc = 0x26be0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26be10: 0x240301a0
    ctx->pc = 0x26be10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26be14: 0x2631818
    ctx->pc = 0x26be14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26be18: 0x3c020034
    ctx->pc = 0x26be18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26be1c: 0x2442eb60
    ctx->pc = 0x26be1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26be20: 0x628021
    ctx->pc = 0x26be20u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26be24: 0x3c020034
    ctx->pc = 0x26be24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26be28: 0x8c42e7c8
    ctx->pc = 0x26be28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26be2c: 0x24140002
    ctx->pc = 0x26be2cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26be30: 0x1674012b
    ctx->pc = 0x26BE30u;
    {
        const bool branch_taken_0x26be30 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 20));
        ctx->pc = 0x26BE34u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 96)));
        if (branch_taken_0x26be30) {
            ctx->pc = 0x26C2E0u;
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26BE38u;
    // 0x26be38: 0x3c030032
    ctx->pc = 0x26be38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x26be3c: 0x8c720808
    ctx->pc = 0x26be3cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x26be40: 0x2a420003
    ctx->pc = 0x26be40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 3));
    // 0x26be44: 0x1440002c
    ctx->pc = 0x26BE44u;
    {
        const bool branch_taken_0x26be44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BE48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26be44) {
            ctx->pc = 0x26BEF8u;
            goto label_26bef8;
        }
    }
    ctx->pc = 0x26BE4Cu;
    // 0x26be4c: 0x3c020031
    ctx->pc = 0x26be4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26be50: 0x8c42ffbc
    ctx->pc = 0x26be50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x26be54: 0x2421023
    ctx->pc = 0x26be54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x26be58: 0xac620808
    ctx->pc = 0x26be58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
    // 0x26be5c: 0x28420002
    ctx->pc = 0x26be5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26be60: 0x10400002
    ctx->pc = 0x26BE60u;
    {
        const bool branch_taken_0x26be60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BE64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x26be60) {
            ctx->pc = 0x26BE6Cu;
            goto label_26be6c;
        }
    }
    ctx->pc = 0x26BE68u;
    // 0x26be68: 0xac620808
    ctx->pc = 0x26be68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
label_26be6c:
    // 0x26be6c: 0x3c020032
    ctx->pc = 0x26be6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26be70: 0x8c420808
    ctx->pc = 0x26be70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x26be74: 0x2842002d
    ctx->pc = 0x26be74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 45));
    // 0x26be78: 0x1040001e
    ctx->pc = 0x26BE78u;
    {
        const bool branch_taken_0x26be78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26BE7Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26be78) {
            ctx->pc = 0x26BEF4u;
            goto label_26bef4;
        }
    }
    ctx->pc = 0x26BE80u;
    // 0x26be80: 0x3c020032
    ctx->pc = 0x26be80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26be84: 0x244c1bc0
    ctx->pc = 0x26be84u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26be88: 0x240a2b00
    ctx->pc = 0x26be88u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26be8c: 0x24090001
    ctx->pc = 0x26be8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26be90: 0x2408003c
    ctx->pc = 0x26be90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 60));
    // 0x26be94: 0x3c020031
    ctx->pc = 0x26be94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26be98: 0x244d1b98
    ctx->pc = 0x26be98u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x26be9c: 0x3c060200
    ctx->pc = 0x26be9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)512 << 16));
    // 0x26bea0: 0x34c600ff
    ctx->pc = 0x26bea0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 255));
    // 0x26bea4: 0x3c070032
    ctx->pc = 0x26bea4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x26bea8: 0x24050002
    ctx->pc = 0x26bea8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26beac: 0x8ce40808
    ctx->pc = 0x26beacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 2056)));
    // 0x26beb0: 0x6a5818
    ctx->pc = 0x26beb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26beb4: 0x0
    ctx->pc = 0x26beb4u;
    // NOP
label_26beb8:
    // 0x26beb8: 0x16c1021
    ctx->pc = 0x26beb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x26bebc: 0x8c4200fc
    ctx->pc = 0x26bebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x26bec0: 0x54490008
    ctx->pc = 0x26BEC0u;
    {
        const bool branch_taken_0x26bec0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        if (branch_taken_0x26bec0) {
            ctx->pc = 0x26BEC4u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x26BEE4u;
            goto label_26bee4;
        }
    }
    ctx->pc = 0x26BEC8u;
    // 0x26bec8: 0x685818
    ctx->pc = 0x26bec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26becc: 0x16d1021
    ctx->pc = 0x26beccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x26bed0: 0x8c420000
    ctx->pc = 0x26bed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26bed4: 0x461024
    ctx->pc = 0x26bed4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26bed8: 0x54400001
    ctx->pc = 0x26BED8u;
    {
        const bool branch_taken_0x26bed8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26bed8) {
            ctx->pc = 0x26BEDCu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x26BEE0u;
            goto label_26bee0;
        }
    }
    ctx->pc = 0x26BEE0u;
label_26bee0:
    // 0x26bee0: 0x24630001
    ctx->pc = 0x26bee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_26bee4:
    // 0x26bee4: 0x28620004
    ctx->pc = 0x26bee4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x26bee8: 0x1440fff3
    ctx->pc = 0x26BEE8u;
    {
        const bool branch_taken_0x26bee8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BEECu;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x26bee8) {
            ctx->pc = 0x26BEB8u;
            goto label_26beb8;
        }
    }
    ctx->pc = 0x26BEF0u;
    // 0x26bef0: 0xace40808
    ctx->pc = 0x26bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2056), GPR_U32(ctx, 4));
label_26bef4:
    // 0x26bef4: 0x3c02003c
    ctx->pc = 0x26bef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26bef8:
    // 0x26bef8: 0x3c110032
    ctx->pc = 0x26bef8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x26befc: 0x8e240808
    ctx->pc = 0x26befcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2056)));
    // 0x26bf00: 0xc09ae16
    ctx->pc = 0x26BF00u;
    SET_GPR_U32(ctx, 31, 0x26BF08u);
    ctx->pc = 0x26BF04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14780), GPR_U32(ctx, 4));
    ctx->pc = 0x26B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        write_stage_info_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BF08u; }
    }
    if (ctx->pc != 0x26BF08u) { return; }
    ctx->pc = 0x26BF08u;
    // 0x26bf08: 0x2a420002
    ctx->pc = 0x26bf08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 2));
    // 0x26bf0c: 0x14400015
    ctx->pc = 0x26BF0Cu;
    {
        const bool branch_taken_0x26bf0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BF10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x26bf0c) {
            ctx->pc = 0x26BF64u;
            goto label_26bf64;
        }
    }
    ctx->pc = 0x26BF14u;
    // 0x26bf14: 0x8e230808
    ctx->pc = 0x26bf14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2056)));
    // 0x26bf18: 0x24020001
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bf1c: 0x146200f1
    ctx->pc = 0x26BF1Cu;
    {
        const bool branch_taken_0x26bf1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BF20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26bf1c) {
            ctx->pc = 0x26C2E4u;
            goto label_26c2e4;
        }
    }
    ctx->pc = 0x26BF24u;
    // 0x26bf24: 0x202d
    ctx->pc = 0x26bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf28: 0x3c020032
    ctx->pc = 0x26bf28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26bf2c: 0x24481bc0
    ctx->pc = 0x26bf2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26bf30: 0x24072b00
    ctx->pc = 0x26bf30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26bf34: 0x24060001
    ctx->pc = 0x26bf34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bf38: 0x24050004
    ctx->pc = 0x26bf38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26bf3c: 0x871018
    ctx->pc = 0x26bf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_26bf40:
    // 0x26bf40: 0x481821
    ctx->pc = 0x26bf40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x26bf44: 0x8c6200fc
    ctx->pc = 0x26bf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x26bf48: 0x50460001
    ctx->pc = 0x26BF48u;
    {
        const bool branch_taken_0x26bf48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x26bf48) {
            ctx->pc = 0x26BF4Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 2292), GPR_U32(ctx, 5));
            ctx->pc = 0x26BF50u;
            goto label_26bf50;
        }
    }
    ctx->pc = 0x26BF50u;
label_26bf50:
    // 0x26bf50: 0x24840001
    ctx->pc = 0x26bf50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x26bf54: 0x28820004
    ctx->pc = 0x26bf54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x26bf58: 0x1440fff9
    ctx->pc = 0x26BF58u;
    {
        const bool branch_taken_0x26bf58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26BF5Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x26bf58) {
            ctx->pc = 0x26BF40u;
            goto label_26bf40;
        }
    }
    ctx->pc = 0x26BF60u;
    // 0x26bf60: 0x3c020032
    ctx->pc = 0x26bf60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_26bf64:
    // 0x26bf64: 0x8c430808
    ctx->pc = 0x26bf64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
    // 0x26bf68: 0x24020001
    ctx->pc = 0x26bf68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bf6c: 0x146200dd
    ctx->pc = 0x26BF6Cu;
    {
        const bool branch_taken_0x26bf6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26BF70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26bf6c) {
            ctx->pc = 0x26C2E4u;
            goto label_26c2e4;
        }
    }
    ctx->pc = 0x26BF74u;
    // 0x26bf74: 0x3c014348
    ctx->pc = 0x26bf74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
    // 0x26bf78: 0x4481a000
    ctx->pc = 0x26bf78u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26bf7c: 0x3c020034
    ctx->pc = 0x26bf7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26bf80: 0x2442eb60
    ctx->pc = 0x26bf80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26bf84: 0xc4410070
    ctx->pc = 0x26bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bf88: 0xc6000070
    ctx->pc = 0x26bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf8c: 0x46000b01
    ctx->pc = 0x26bf8cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26bf90: 0xe7ac0000
    ctx->pc = 0x26bf90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26bf94: 0xc4420074
    ctx->pc = 0x26bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26bf98: 0xc6000074
    ctx->pc = 0x26bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bf9c: 0x46001081
    ctx->pc = 0x26bf9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26bfa0: 0xe7a20004
    ctx->pc = 0x26bfa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26bfa4: 0xc4410078
    ctx->pc = 0x26bfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26bfa8: 0xc6000078
    ctx->pc = 0x26bfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26bfac: 0x46000841
    ctx->pc = 0x26bfacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26bfb0: 0xe7a10008
    ctx->pc = 0x26bfb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26bfb4: 0x460c6002
    ctx->pc = 0x26bfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26bfb8: 0x46021082
    ctx->pc = 0x26bfb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26bfbc: 0x46020000
    ctx->pc = 0x26bfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26bfc0: 0x46010842
    ctx->pc = 0x26bfc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26bfc4: 0x46010000
    ctx->pc = 0x26bfc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26bfc8: 0x0
    ctx->pc = 0x26bfc8u;
    // NOP
    // 0x26bfcc: 0x0
    ctx->pc = 0x26bfccu;
    // NOP
    // 0x26bfd0: 0x46000004
    ctx->pc = 0x26bfd0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26bfd4: 0x46000032
    ctx->pc = 0x26bfd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26bfd8: 0x0
    ctx->pc = 0x26bfd8u;
    // NOP
    // 0x26bfdc: 0x45030006
    ctx->pc = 0x26BFDCu;
    {
        const bool branch_taken_0x26bfdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26bfdc) {
            ctx->pc = 0x26BFE0u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26BFF8u;
            goto label_26bff8;
        }
    }
    ctx->pc = 0x26BFE4u;
    // 0x26bfe4: 0x460c6302
    ctx->pc = 0x26bfe4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26bfe8: 0x46026300
    ctx->pc = 0x26bfe8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26bfec: 0xc0ba284
    ctx->pc = 0x26BFECu;
    SET_GPR_U32(ctx, 31, 0x26BFF4u);
    ctx->pc = 0x26BFF0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFF4u; }
    }
    if (ctx->pc != 0x26BFF4u) { return; }
    ctx->pc = 0x26BFF4u;
    // 0x26bff4: 0x46000086
    ctx->pc = 0x26bff4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26bff8:
    // 0x26bff8: 0x3c013e99
    ctx->pc = 0x26bff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x26bffc: 0x3421999a
    ctx->pc = 0x26bffcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26c000: 0x44810000
    ctx->pc = 0x26c000u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c004: 0x46020036
    ctx->pc = 0x26c004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c008: 0x0
    ctx->pc = 0x26c008u;
    // NOP
    // 0x26c00c: 0x45020026
    ctx->pc = 0x26C00Cu;
    {
        const bool branch_taken_0x26c00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c00c) {
            ctx->pc = 0x26C010u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x26C0A8u;
            goto label_26c0a8;
        }
    }
    ctx->pc = 0x26C014u;
    // 0x26c014: 0x4602a034
    ctx->pc = 0x26c014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c018: 0x0
    ctx->pc = 0x26c018u;
    // NOP
    // 0x26c01c: 0x45030001
    ctx->pc = 0x26C01Cu;
    {
        const bool branch_taken_0x26c01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c01c) {
            ctx->pc = 0x26C020u;
            ctx->f[2] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x26C024u;
            goto label_26c024;
        }
    }
    ctx->pc = 0x26C024u;
label_26c024:
    // 0x26c024: 0x3c030031
    ctx->pc = 0x26c024u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26c028: 0x8c62ffbc
    ctx->pc = 0x26c028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26c02c: 0x4400005
    ctx->pc = 0x26C02Cu;
    {
        const bool branch_taken_0x26c02c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C030u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26c02c) {
            ctx->pc = 0x26C044u;
            goto label_26c044;
        }
    }
    ctx->pc = 0x26C034u;
    // 0x26c034: 0x44820800
    ctx->pc = 0x26c034u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26c038: 0x46800860
    ctx->pc = 0x26c038u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26c03c: 0x10000008
    ctx->pc = 0x26C03Cu;
    {
        const bool branch_taken_0x26c03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c03c) {
            ctx->pc = 0x26C060u;
            goto label_26c060;
        }
    }
    ctx->pc = 0x26C044u;
label_26c044:
    // 0x26c044: 0x8c820000
    ctx->pc = 0x26c044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c048: 0x30430001
    ctx->pc = 0x26c048u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26c04c: 0x21042
    ctx->pc = 0x26c04cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c050: 0x621825
    ctx->pc = 0x26c050u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c054: 0x44830800
    ctx->pc = 0x26c054u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26c058: 0x46800860
    ctx->pc = 0x26c058u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26c05c: 0x46010840
    ctx->pc = 0x26c05cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26c060:
    // 0x26c060: 0x0
    ctx->pc = 0x26c060u;
    // NOP
    // 0x26c064: 0x0
    ctx->pc = 0x26c064u;
    // NOP
    // 0x26c068: 0x46020843
    ctx->pc = 0x26c068u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x26c06c: 0x3c013f80
    ctx->pc = 0x26c06cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26c070: 0x44810000
    ctx->pc = 0x26c070u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c074: 0x46010034
    ctx->pc = 0x26c074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c078: 0x0
    ctx->pc = 0x26c078u;
    // NOP
    // 0x26c07c: 0x45030001
    ctx->pc = 0x26C07Cu;
    {
        const bool branch_taken_0x26c07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c07c) {
            ctx->pc = 0x26C080u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26C084u;
            goto label_26c084;
        }
    }
    ctx->pc = 0x26C084u;
label_26c084:
    // 0x26c084: 0xc7a00000
    ctx->pc = 0x26c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c088: 0x46000802
    ctx->pc = 0x26c088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c08c: 0xe7a00000
    ctx->pc = 0x26c08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c090: 0xc7a00004
    ctx->pc = 0x26c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c094: 0x46000802
    ctx->pc = 0x26c094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c098: 0xe7a00004
    ctx->pc = 0x26c098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c09c: 0xc7a00008
    ctx->pc = 0x26c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0a0: 0x46000802
    ctx->pc = 0x26c0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c0a4: 0xe7a00008
    ctx->pc = 0x26c0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26c0a8:
    // 0x26c0a8: 0xc6000070
    ctx->pc = 0x26c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0ac: 0xc7a10000
    ctx->pc = 0x26c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c0b0: 0x46010000
    ctx->pc = 0x26c0b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c0b4: 0xe6000070
    ctx->pc = 0x26c0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x26c0b8: 0xc6000074
    ctx->pc = 0x26c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0bc: 0xc7a10004
    ctx->pc = 0x26c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c0c0: 0x46010000
    ctx->pc = 0x26c0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c0c4: 0xe6000074
    ctx->pc = 0x26c0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x26c0c8: 0xc6000078
    ctx->pc = 0x26c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0cc: 0xc7a10008
    ctx->pc = 0x26c0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c0d0: 0x46010000
    ctx->pc = 0x26c0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c0d4: 0xe6000078
    ctx->pc = 0x26c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x26c0d8: 0x3c020034
    ctx->pc = 0x26c0d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c0dc: 0x2442eb60
    ctx->pc = 0x26c0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c0e0: 0xc4410140
    ctx->pc = 0x26c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c0e4: 0xc6000140
    ctx->pc = 0x26c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0e8: 0x46000b01
    ctx->pc = 0x26c0e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26c0ec: 0xe7ac0000
    ctx->pc = 0x26c0ecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c0f0: 0xc4420144
    ctx->pc = 0x26c0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c0f4: 0xc6000144
    ctx->pc = 0x26c0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c0f8: 0x46001081
    ctx->pc = 0x26c0f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26c0fc: 0xe7a20004
    ctx->pc = 0x26c0fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c100: 0xc4410148
    ctx->pc = 0x26c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c104: 0xc6000148
    ctx->pc = 0x26c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c108: 0x46000841
    ctx->pc = 0x26c108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26c10c: 0xe7a10008
    ctx->pc = 0x26c10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c110: 0x460c6002
    ctx->pc = 0x26c110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26c114: 0x46021082
    ctx->pc = 0x26c114u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26c118: 0x46020000
    ctx->pc = 0x26c118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26c11c: 0x46010842
    ctx->pc = 0x26c11cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26c120: 0x46010000
    ctx->pc = 0x26c120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c124: 0x0
    ctx->pc = 0x26c124u;
    // NOP
    // 0x26c128: 0x0
    ctx->pc = 0x26c128u;
    // NOP
    // 0x26c12c: 0x46000004
    ctx->pc = 0x26c12cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26c130: 0x46000032
    ctx->pc = 0x26c130u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c134: 0x0
    ctx->pc = 0x26c134u;
    // NOP
    // 0x26c138: 0x45030006
    ctx->pc = 0x26C138u;
    {
        const bool branch_taken_0x26c138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c138) {
            ctx->pc = 0x26C13Cu;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26C154u;
            goto label_26c154;
        }
    }
    ctx->pc = 0x26C140u;
    // 0x26c140: 0x460c6302
    ctx->pc = 0x26c140u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26c144: 0x46026300
    ctx->pc = 0x26c144u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26c148: 0xc0ba284
    ctx->pc = 0x26C148u;
    SET_GPR_U32(ctx, 31, 0x26C150u);
    ctx->pc = 0x26C14Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C150u; }
    }
    if (ctx->pc != 0x26C150u) { return; }
    ctx->pc = 0x26C150u;
    // 0x26c150: 0x46000086
    ctx->pc = 0x26c150u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26c154:
    // 0x26c154: 0x3c013e99
    ctx->pc = 0x26c154u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x26c158: 0x3421999a
    ctx->pc = 0x26c158u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26c15c: 0x44810000
    ctx->pc = 0x26c15cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c160: 0x46020036
    ctx->pc = 0x26c160u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c164: 0x0
    ctx->pc = 0x26c164u;
    // NOP
    // 0x26c168: 0x45020028
    ctx->pc = 0x26C168u;
    {
        const bool branch_taken_0x26c168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c168) {
            ctx->pc = 0x26C16Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x26C20Cu;
            goto label_26c20c;
        }
    }
    ctx->pc = 0x26C170u;
    // 0x26c170: 0x3c0141a0
    ctx->pc = 0x26c170u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16800 << 16));
    // 0x26c174: 0x44810000
    ctx->pc = 0x26c174u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c178: 0x46020034
    ctx->pc = 0x26c178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c17c: 0x0
    ctx->pc = 0x26c17cu;
    // NOP
    // 0x26c180: 0x45030001
    ctx->pc = 0x26C180u;
    {
        const bool branch_taken_0x26c180 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c180) {
            ctx->pc = 0x26C184u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26C188u;
            goto label_26c188;
        }
    }
    ctx->pc = 0x26C188u;
label_26c188:
    // 0x26c188: 0x3c030031
    ctx->pc = 0x26c188u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26c18c: 0x8c62ffbc
    ctx->pc = 0x26c18cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26c190: 0x4400005
    ctx->pc = 0x26C190u;
    {
        const bool branch_taken_0x26c190 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C194u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26c190) {
            ctx->pc = 0x26C1A8u;
            goto label_26c1a8;
        }
    }
    ctx->pc = 0x26C198u;
    // 0x26c198: 0x44820800
    ctx->pc = 0x26c198u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26c19c: 0x46800860
    ctx->pc = 0x26c19cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26c1a0: 0x10000008
    ctx->pc = 0x26C1A0u;
    {
        const bool branch_taken_0x26c1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c1a0) {
            ctx->pc = 0x26C1C4u;
            goto label_26c1c4;
        }
    }
    ctx->pc = 0x26C1A8u;
label_26c1a8:
    // 0x26c1a8: 0x8c820000
    ctx->pc = 0x26c1a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c1ac: 0x30430001
    ctx->pc = 0x26c1acu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26c1b0: 0x21042
    ctx->pc = 0x26c1b0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26c1b4: 0x621825
    ctx->pc = 0x26c1b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26c1b8: 0x44830800
    ctx->pc = 0x26c1b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26c1bc: 0x46800860
    ctx->pc = 0x26c1bcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26c1c0: 0x46010840
    ctx->pc = 0x26c1c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26c1c4:
    // 0x26c1c4: 0x0
    ctx->pc = 0x26c1c4u;
    // NOP
    // 0x26c1c8: 0x0
    ctx->pc = 0x26c1c8u;
    // NOP
    // 0x26c1cc: 0x46020843
    ctx->pc = 0x26c1ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x26c1d0: 0x3c013f80
    ctx->pc = 0x26c1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26c1d4: 0x44810000
    ctx->pc = 0x26c1d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26c1d8: 0x46010034
    ctx->pc = 0x26c1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c1dc: 0x0
    ctx->pc = 0x26c1dcu;
    // NOP
    // 0x26c1e0: 0x45030001
    ctx->pc = 0x26C1E0u;
    {
        const bool branch_taken_0x26c1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c1e0) {
            ctx->pc = 0x26C1E4u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26C1E8u;
            goto label_26c1e8;
        }
    }
    ctx->pc = 0x26C1E8u;
label_26c1e8:
    // 0x26c1e8: 0xc7a00000
    ctx->pc = 0x26c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c1ec: 0x46000802
    ctx->pc = 0x26c1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c1f0: 0xe7a00000
    ctx->pc = 0x26c1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c1f4: 0xc7a00004
    ctx->pc = 0x26c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c1f8: 0x46000802
    ctx->pc = 0x26c1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c1fc: 0xe7a00004
    ctx->pc = 0x26c1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c200: 0xc7a00008
    ctx->pc = 0x26c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c204: 0x46000802
    ctx->pc = 0x26c204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26c208: 0xe7a00008
    ctx->pc = 0x26c208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26c20c:
    // 0x26c20c: 0xc6000140
    ctx->pc = 0x26c20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c210: 0xc7a10000
    ctx->pc = 0x26c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c214: 0x46010000
    ctx->pc = 0x26c214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c218: 0xe6000140
    ctx->pc = 0x26c218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
    // 0x26c21c: 0xc6000144
    ctx->pc = 0x26c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c220: 0xc7a10004
    ctx->pc = 0x26c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c224: 0x46010000
    ctx->pc = 0x26c224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c228: 0xe6000144
    ctx->pc = 0x26c228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x26c22c: 0xc6000148
    ctx->pc = 0x26c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c230: 0xc7a10008
    ctx->pc = 0x26c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c234: 0x46010000
    ctx->pc = 0x26c234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26c238: 0x1e800029
    ctx->pc = 0x26C238u;
    {
        const bool branch_taken_0x26c238 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x26C23Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
        if (branch_taken_0x26c238) {
            ctx->pc = 0x26C2E0u;
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26C240u;
    // 0x26c240: 0xc099bfa
    ctx->pc = 0x26C240u;
    SET_GPR_U32(ctx, 31, 0x26C248u);
    ctx->pc = 0x266FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_msgs_at_start_0x266fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C248u; }
    }
    if (ctx->pc != 0x26C248u) { return; }
    ctx->pc = 0x26C248u;
    // 0x26c248: 0x3c030034
    ctx->pc = 0x26c248u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26c24c: 0x82a20025
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 37)));
    // 0x26c250: 0x440000d
    ctx->pc = 0x26C250u;
    {
        const bool branch_taken_0x26c250 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C254u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965572), GPR_U32(ctx, 2));
        if (branch_taken_0x26c250) {
            ctx->pc = 0x26C288u;
            goto label_26c288;
        }
    }
    ctx->pc = 0x26C258u;
    // 0x26c258: 0x3c020034
    ctx->pc = 0x26c258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c25c: 0xac40f948
    ctx->pc = 0x26c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965576), GPR_U32(ctx, 0));
    // 0x26c260: 0x3c030032
    ctx->pc = 0x26c260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x26c264: 0x24020002
    ctx->pc = 0x26c264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c268: 0xac62080c
    ctx->pc = 0x26c268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2060), GPR_U32(ctx, 2));
    // 0x26c26c: 0x260202d
    ctx->pc = 0x26c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c270: 0x24050002
    ctx->pc = 0x26c270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c274: 0xc099c34
    ctx->pc = 0x26C274u;
    SET_GPR_U32(ctx, 31, 0x26C27Cu);
    ctx->pc = 0x26C278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C27Cu; }
    }
    if (ctx->pc != 0x26C27Cu) { return; }
    ctx->pc = 0x26C27Cu;
    // 0x26c27c: 0x3c020034
    ctx->pc = 0x26c27cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c280: 0x10000017
    ctx->pc = 0x26C280u;
    {
        const bool branch_taken_0x26c280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C284u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
        if (branch_taken_0x26c280) {
            ctx->pc = 0x26C2E0u;
            goto label_26c2e0;
        }
    }
    ctx->pc = 0x26C288u;
label_26c288:
    // 0x26c288: 0x3c020032
    ctx->pc = 0x26c288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c28c: 0xac40080c
    ctx->pc = 0x26c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x26c290: 0x3c020032
    ctx->pc = 0x26c290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26c294: 0xac400808
    ctx->pc = 0x26c294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x26c298: 0x3c020034
    ctx->pc = 0x26c298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c29c: 0xac40f520
    ctx->pc = 0x26c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
    // 0x26c2a0: 0x260202d
    ctx->pc = 0x26c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2a4: 0x282d
    ctx->pc = 0x26c2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2a8: 0xc099c34
    ctx->pc = 0x26C2A8u;
    SET_GPR_U32(ctx, 31, 0x26C2B0u);
    ctx->pc = 0x26C2ACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C2B0u; }
    }
    if (ctx->pc != 0x26C2B0u) { return; }
    ctx->pc = 0x26C2B0u;
    // 0x26c2b0: 0xae000000
    ctx->pc = 0x26c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26c2b4: 0x3c020031
    ctx->pc = 0x26c2b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x26c2b8: 0xdc420e28
    ctx->pc = 0x26c2b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x26c2bc: 0x30420004
    ctx->pc = 0x26c2bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x26c2c0: 0x10400005
    ctx->pc = 0x26C2C0u;
    {
        const bool branch_taken_0x26c2c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C2C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26c2c0) {
            ctx->pc = 0x26C2D8u;
            goto label_26c2d8;
        }
    }
    ctx->pc = 0x26C2C8u;
    // 0x26c2c8: 0xdc430e38
    ctx->pc = 0x26c2c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3640)));
    // 0x26c2cc: 0x24040004
    ctx->pc = 0x26c2ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x26c2d0: 0x641825
    ctx->pc = 0x26c2d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26c2d4: 0xfc430e38
    ctx->pc = 0x26c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 3640), GPR_U64(ctx, 3));
label_26c2d8:
    // 0x26c2d8: 0x10000002
    ctx->pc = 0x26C2D8u;
    {
        const bool branch_taken_0x26c2d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26C2DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26c2d8) {
            ctx->pc = 0x26C2E4u;
            goto label_26c2e4;
        }
    }
    ctx->pc = 0x26C2E0u;
label_26c2e0:
    // 0x26c2e0: 0x2402ffff
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26c2e4:
    // 0x26c2e4: 0xdfbf0070
    ctx->pc = 0x26c2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c2e8: 0xdfb50060
    ctx->pc = 0x26c2e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c2ec: 0xdfb40050
    ctx->pc = 0x26c2ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c2f0: 0xdfb30040
    ctx->pc = 0x26c2f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c2f4: 0xdfb20030
    ctx->pc = 0x26c2f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c2f8: 0xdfb10020
    ctx->pc = 0x26c2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c2fc: 0xdfb00010
    ctx->pc = 0x26c2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c300: 0xc7b40080
    ctx->pc = 0x26c300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c304: 0x3e00008
    ctx->pc = 0x26C304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C308u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BE6Cu: goto label_26be6c;
            case 0x26BEB8u: goto label_26beb8;
            case 0x26BEE0u: goto label_26bee0;
            case 0x26BEE4u: goto label_26bee4;
            case 0x26BEF4u: goto label_26bef4;
            case 0x26BEF8u: goto label_26bef8;
            case 0x26BF40u: goto label_26bf40;
            case 0x26BF50u: goto label_26bf50;
            case 0x26BF64u: goto label_26bf64;
            case 0x26BFF8u: goto label_26bff8;
            case 0x26C024u: goto label_26c024;
            case 0x26C044u: goto label_26c044;
            case 0x26C060u: goto label_26c060;
            case 0x26C084u: goto label_26c084;
            case 0x26C0A8u: goto label_26c0a8;
            case 0x26C154u: goto label_26c154;
            case 0x26C188u: goto label_26c188;
            case 0x26C1A8u: goto label_26c1a8;
            case 0x26C1C4u: goto label_26c1c4;
            case 0x26C1E8u: goto label_26c1e8;
            case 0x26C20Cu: goto label_26c20c;
            case 0x26C288u: goto label_26c288;
            case 0x26C2D8u: goto label_26c2d8;
            case 0x26C2E0u: goto label_26c2e0;
            case 0x26C2E4u: goto label_26c2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C30Cu;
}
