#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetDORegs
// Address: 0x2bfd18 - 0x2c0358
void pbSetDORegs_0x2bfd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bfd18u;

    // 0x2bfd18: 0x27bdff50
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bfd1c: 0xffbf00a0
    ctx->pc = 0x2bfd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bfd20: 0xffbe0090
    ctx->pc = 0x2bfd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2bfd24: 0xffb70080
    ctx->pc = 0x2bfd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2bfd28: 0xffb60070
    ctx->pc = 0x2bfd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2bfd2c: 0xffb50060
    ctx->pc = 0x2bfd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2bfd30: 0xffb40050
    ctx->pc = 0x2bfd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2bfd34: 0xffb30040
    ctx->pc = 0x2bfd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bfd38: 0xffb20030
    ctx->pc = 0x2bfd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bfd3c: 0xffb10020
    ctx->pc = 0x2bfd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bfd40: 0xffb00010
    ctx->pc = 0x2bfd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bfd44: 0x80902d
    ctx->pc = 0x2bfd44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd48: 0xe0882d
    ctx->pc = 0x2bfd48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd4c: 0x100982d
    ctx->pc = 0x2bfd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd50: 0x120a02d
    ctx->pc = 0x2bfd50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd54: 0x140b82d
    ctx->pc = 0x2bfd54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd58: 0xafab0000
    ctx->pc = 0x2bfd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2bfd5c: 0x8fb500b0
    ctx->pc = 0x2bfd5cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bfd60: 0x3c020036
    ctx->pc = 0x2bfd60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bfd64: 0x8c5edee0
    ctx->pc = 0x2bfd64u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bfd68: 0x3c020037
    ctx->pc = 0x2bfd68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bfd6c: 0x8c50276c
    ctx->pc = 0x2bfd6cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 10092)));
    // 0x2bfd70: 0xae0000b0
    ctx->pc = 0x2bfd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2bfd74: 0xae0000d0
    ctx->pc = 0x2bfd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2bfd78: 0x8e0200bc
    ctx->pc = 0x2bfd78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2bfd7c: 0x14450004
    ctx->pc = 0x2BFD7Cu;
    {
        const bool branch_taken_0x2bfd7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x2BFD80u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd7c) {
            ctx->pc = 0x2BFD90u;
            goto label_2bfd90;
        }
    }
    ctx->pc = 0x2BFD84u;
    // 0x2bfd84: 0x8e0200c0
    ctx->pc = 0x2bfd84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2bfd88: 0x10460005
    ctx->pc = 0x2BFD88u;
    {
        const bool branch_taken_0x2bfd88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        if (branch_taken_0x2bfd88) {
            ctx->pc = 0x2BFDA0u;
            goto label_2bfda0;
        }
    }
    ctx->pc = 0x2BFD90u;
label_2bfd90:
    // 0x2bfd90: 0xae0500bc
    ctx->pc = 0x2bfd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 5));
    // 0x2bfd94: 0xae0600c0
    ctx->pc = 0x2bfd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 6));
    // 0x2bfd98: 0xc0afaaa
    ctx->pc = 0x2BFD98u;
    SET_GPR_U32(ctx, 31, 0x2BFDA0u);
    ctx->pc = 0x2BFD9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BEAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x2beaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDA0u; }
    }
    if (ctx->pc != 0x2BFDA0u) { return; }
    ctx->pc = 0x2BFDA0u;
label_2bfda0:
    // 0x2bfda0: 0x52a000ba
    ctx->pc = 0x2BFDA0u;
    {
        const bool branch_taken_0x2bfda0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bfda0) {
            ctx->pc = 0x2BFDA4u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->pc = 0x2C008Cu;
            goto label_2c008c;
        }
    }
    ctx->pc = 0x2BFDA8u;
    // 0x2bfda8: 0xc0a8e8a
    ctx->pc = 0x2BFDA8u;
    SET_GPR_U32(ctx, 31, 0x2BFDB0u);
    ctx->pc = 0x2BFDACu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 21));
    ctx->pc = 0x2A3A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugMode_0x2a3a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFDB0u; }
    }
    if (ctx->pc != 0x2BFDB0u) { return; }
    ctx->pc = 0x2BFDB0u;
    // 0x2bfdb0: 0xae020078
    ctx->pc = 0x2bfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2bfdb4: 0x8fc2001c
    ctx->pc = 0x2bfdb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2bfdb8: 0x8c4200a4
    ctx->pc = 0x2bfdb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x2bfdbc: 0x10400003
    ctx->pc = 0x2BFDBCu;
    {
        const bool branch_taken_0x2bfdbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFDC0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        if (branch_taken_0x2bfdbc) {
            ctx->pc = 0x2BFDCCu;
            goto label_2bfdcc;
        }
    }
    ctx->pc = 0x2BFDC4u;
    // 0x2bfdc4: 0x10000004
    ctx->pc = 0x2BFDC4u;
    {
        const bool branch_taken_0x2bfdc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFDC8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x2bfdc4) {
            ctx->pc = 0x2BFDD8u;
            goto label_2bfdd8;
        }
    }
    ctx->pc = 0x2BFDCCu;
label_2bfdcc:
    // 0x2bfdcc: 0x3c03ffff
    ctx->pc = 0x2bfdccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bfdd0: 0x3463ffbf
    ctx->pc = 0x2bfdd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65471));
    // 0x2bfdd4: 0x431024
    ctx->pc = 0x2bfdd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bfdd8:
    // 0x2bfdd8: 0x12200013
    ctx->pc = 0x2BFDD8u;
    {
        const bool branch_taken_0x2bfdd8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFDDCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        if (branch_taken_0x2bfdd8) {
            ctx->pc = 0x2BFE28u;
            goto label_2bfe28;
        }
    }
    ctx->pc = 0x2BFDE0u;
    // 0x2bfde0: 0x32624000
    ctx->pc = 0x2bfde0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 16384));
    // 0x2bfde4: 0x14400011
    ctx->pc = 0x2BFDE4u;
    {
        const bool branch_taken_0x2bfde4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BFDE8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        if (branch_taken_0x2bfde4) {
            ctx->pc = 0x2BFE2Cu;
            goto label_2bfe2c;
        }
    }
    ctx->pc = 0x2BFDECu;
    // 0x2bfdec: 0x34420002
    ctx->pc = 0x2bfdecu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2bfdf0: 0xae020074
    ctx->pc = 0x2bfdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2bfdf4: 0x3223ffff
    ctx->pc = 0x2bfdf4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 65535));
    // 0x2bfdf8: 0x141400
    ctx->pc = 0x2bfdf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 16));
    // 0x2bfdfc: 0x621825
    ctx->pc = 0x2bfdfcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfe00: 0x8e0200c4
    ctx->pc = 0x2bfe00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2bfe04: 0x10430006
    ctx->pc = 0x2BFE04u;
    {
        const bool branch_taken_0x2bfe04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2BFE08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe04) {
            ctx->pc = 0x2BFE20u;
            goto label_2bfe20;
        }
    }
    ctx->pc = 0x2BFE0Cu;
    // 0x2bfe0c: 0xae0300c4
    ctx->pc = 0x2bfe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x2bfe10: 0x280282d
    ctx->pc = 0x2bfe10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe14: 0xc0afa80
    ctx->pc = 0x2BFE14u;
    SET_GPR_U32(ctx, 31, 0x2BFE1Cu);
    ctx->pc = 0x2BFE18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BEA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLmapInfo_0x2bea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFE1Cu; }
    }
    if (ctx->pc != 0x2BFE1Cu) { return; }
    ctx->pc = 0x2BFE1Cu;
    // 0x2bfe1c: 0x24160008
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8));
label_2bfe20:
    // 0x2bfe20: 0x10000008
    ctx->pc = 0x2BFE20u;
    {
        const bool branch_taken_0x2bfe20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFE24u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 8192));
        if (branch_taken_0x2bfe20) {
            ctx->pc = 0x2BFE44u;
            goto label_2bfe44;
        }
    }
    ctx->pc = 0x2BFE28u;
label_2bfe28:
    // 0x2bfe28: 0x8e020074
    ctx->pc = 0x2bfe28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_2bfe2c:
    // 0x2bfe2c: 0x3c03ffff
    ctx->pc = 0x2bfe2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bfe30: 0x3463fffd
    ctx->pc = 0x2bfe30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65533));
    // 0x2bfe34: 0x431024
    ctx->pc = 0x2bfe34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfe38: 0xae020074
    ctx->pc = 0x2bfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2bfe3c: 0x2402ffff
    ctx->pc = 0x2bfe3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfe40: 0xae0200c4
    ctx->pc = 0x2bfe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_2bfe44:
    // 0x2bfe44: 0x8e0300c8
    ctx->pc = 0x2bfe44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2bfe48: 0x2402ffff
    ctx->pc = 0x2bfe48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfe4c: 0x54620004
    ctx->pc = 0x2BFE4Cu;
    {
        const bool branch_taken_0x2bfe4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bfe4c) {
            ctx->pc = 0x2BFE50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->pc = 0x2BFE60u;
            goto label_2bfe60;
        }
    }
    ctx->pc = 0x2BFE54u;
    // 0x2bfe54: 0x3c11189a
    ctx->pc = 0x2bfe54u;
    SET_GPR_U32(ctx, 17, ((uint32_t)6298 << 16));
    // 0x2bfe58: 0x10000007
    ctx->pc = 0x2BFE58u;
    {
        const bool branch_taken_0x2bfe58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFE5Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 63424));
        if (branch_taken_0x2bfe58) {
            ctx->pc = 0x2BFE78u;
            goto label_2bfe78;
        }
    }
    ctx->pc = 0x2BFE60u;
label_2bfe60:
    // 0x2bfe60: 0x2621825
    ctx->pc = 0x2bfe60u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bfe64: 0x2628826
    ctx->pc = 0x2bfe64u;
    SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bfe68: 0x3c02181a
    ctx->pc = 0x2bfe68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)6170 << 16));
    // 0x2bfe6c: 0x34420700
    ctx->pc = 0x2bfe6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1792));
    // 0x2bfe70: 0x621824
    ctx->pc = 0x2bfe70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfe74: 0x2238825
    ctx->pc = 0x2bfe74u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2bfe78:
    // 0x2bfe78: 0xae1300c8
    ctx->pc = 0x2bfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 19));
    // 0x2bfe7c: 0x86a2006a
    ctx->pc = 0x2bfe7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 106)));
    // 0x2bfe80: 0x44820800
    ctx->pc = 0x2bfe80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2bfe84: 0x46800860
    ctx->pc = 0x2bfe84u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2bfe88: 0xc60000d4
    ctx->pc = 0x2bfe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfe8c: 0x46010032
    ctx->pc = 0x2bfe8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfe90: 0x0
    ctx->pc = 0x2bfe90u;
    // NOP
    // 0x2bfe94: 0x45000003
    ctx->pc = 0x2BFE94u;
    {
        const bool branch_taken_0x2bfe94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFE98u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 28928));
        if (branch_taken_0x2bfe94) {
            ctx->pc = 0x2BFEA4u;
            goto label_2bfea4;
        }
    }
    ctx->pc = 0x2BFE9Cu;
    // 0x2bfe9c: 0x1040000d
    ctx->pc = 0x2BFE9Cu;
    {
        const bool branch_taken_0x2bfe9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFEA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
        if (branch_taken_0x2bfe9c) {
            ctx->pc = 0x2BFED4u;
            goto label_2bfed4;
        }
    }
    ctx->pc = 0x2BFEA4u;
label_2bfea4:
    // 0x2bfea4: 0x3c02ffff
    ctx->pc = 0x2bfea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bfea8: 0x34428eff
    ctx->pc = 0x2bfea8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36607));
    // 0x2bfeac: 0x2228824
    ctx->pc = 0x2bfeacu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bfeb0: 0x86a2006a
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 106)));
    // 0x2bfeb4: 0x44820000
    ctx->pc = 0x2bfeb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2bfeb8: 0x46800020
    ctx->pc = 0x2bfeb8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2bfebc: 0xe60000d4
    ctx->pc = 0x2bfebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2bfec0: 0x200202d
    ctx->pc = 0x2bfec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfec4: 0x260282d
    ctx->pc = 0x2bfec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfec8: 0xc0afbbe
    ctx->pc = 0x2BFEC8u;
    SET_GPR_U32(ctx, 31, 0x2BFED0u);
    ctx->pc = 0x2BFECCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BEEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPrimColor_0x2beef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFED0u; }
    }
    if (ctx->pc != 0x2BFED0u) { return; }
    ctx->pc = 0x2BFED0u;
    // 0x2bfed0: 0x3c020010
    ctx->pc = 0x2bfed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
label_2bfed4:
    // 0x2bfed4: 0x34420600
    ctx->pc = 0x2bfed4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1536));
    // 0x2bfed8: 0x2221024
    ctx->pc = 0x2bfed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bfedc: 0x10400007
    ctx->pc = 0x2BFEDCu;
    {
        const bool branch_taken_0x2bfedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFEE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bfedc) {
            ctx->pc = 0x2BFEFCu;
            goto label_2bfefc;
        }
    }
    ctx->pc = 0x2BFEE4u;
    // 0x2bfee4: 0x3c02ffef
    ctx->pc = 0x2bfee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65519 << 16));
    // 0x2bfee8: 0x3442f9ff
    ctx->pc = 0x2bfee8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 63999));
    // 0x2bfeec: 0x2228824
    ctx->pc = 0x2bfeecu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bfef0: 0x260282d
    ctx->pc = 0x2bfef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfef4: 0xc0afc20
    ctx->pc = 0x2BFEF4u;
    SET_GPR_U32(ctx, 31, 0x2BFEFCu);
    ctx->pc = 0x2BFEF8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BF080u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPrimAlpha_0x2bf080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFEFCu; }
    }
    if (ctx->pc != 0x2BFEFCu) { return; }
    ctx->pc = 0x2BFEFCu;
label_2bfefc:
    // 0x2bfefc: 0x3c031000
    ctx->pc = 0x2bfefcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2bff00: 0x2231024
    ctx->pc = 0x2bff00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bff04: 0x50400014
    ctx->pc = 0x2BFF04u;
    {
        const bool branch_taken_0x2bff04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bff04) {
            ctx->pc = 0x2BFF08u;
            SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
            ctx->pc = 0x2BFF58u;
            goto label_2bff58;
        }
    }
    ctx->pc = 0x2BFF0Cu;
    // 0x2bff0c: 0x3c02efff
    ctx->pc = 0x2bff0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
    // 0x2bff10: 0x3442ffff
    ctx->pc = 0x2bff10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bff14: 0x2228824
    ctx->pc = 0x2bff14u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bff18: 0x2631024
    ctx->pc = 0x2bff18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2bff1c: 0x10400007
    ctx->pc = 0x2BFF1Cu;
    {
        const bool branch_taken_0x2bff1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFF20u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2bff1c) {
            ctx->pc = 0x2BFF3Cu;
            goto label_2bff3c;
        }
    }
    ctx->pc = 0x2BFF24u;
    // 0x2bff24: 0x92a2005e
    ctx->pc = 0x2bff24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 94)));
    // 0x2bff28: 0x21100
    ctx->pc = 0x2bff28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bff2c: 0x246310b0
    ctx->pc = 0x2bff2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2bff30: 0x431021
    ctx->pc = 0x2bff30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bff34: 0x10000005
    ctx->pc = 0x2BFF34u;
    {
        const bool branch_taken_0x2bff34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFF38u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        if (branch_taken_0x2bff34) {
            ctx->pc = 0x2BFF4Cu;
            goto label_2bff4c;
        }
    }
    ctx->pc = 0x2BFF3Cu;
label_2bff3c:
    // 0x2bff3c: 0x8e0200e8
    ctx->pc = 0x2bff3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2bff40: 0x10400005
    ctx->pc = 0x2BFF40u;
    {
        const bool branch_taken_0x2bff40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFF44u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x2bff40) {
            ctx->pc = 0x2BFF58u;
            goto label_2bff58;
        }
    }
    ctx->pc = 0x2BFF48u;
    // 0x2bff48: 0xae0000e8
    ctx->pc = 0x2bff48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_2bff4c:
    // 0x2bff4c: 0x24020004
    ctx->pc = 0x2bff4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bff50: 0xae0200b4
    ctx->pc = 0x2bff50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2bff54: 0x3c03000a
    ctx->pc = 0x2bff54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_2bff58:
    // 0x2bff58: 0x2231024
    ctx->pc = 0x2bff58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bff5c: 0x5040001c
    ctx->pc = 0x2BFF5Cu;
    {
        const bool branch_taken_0x2bff5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bff5c) {
            ctx->pc = 0x2BFF60u;
            SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
            ctx->pc = 0x2BFFD0u;
            goto label_2bffd0;
        }
    }
    ctx->pc = 0x2BFF64u;
    // 0x2bff64: 0x3c02fff5
    ctx->pc = 0x2bff64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65525 << 16));
    // 0x2bff68: 0x3442ffff
    ctx->pc = 0x2bff68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bff6c: 0x2228824
    ctx->pc = 0x2bff6cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bff70: 0x2631024
    ctx->pc = 0x2bff70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2bff74: 0x1040000f
    ctx->pc = 0x2BFF74u;
    {
        const bool branch_taken_0x2bff74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFF78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bff74) {
            ctx->pc = 0x2BFFB4u;
            goto label_2bffb4;
        }
    }
    ctx->pc = 0x2BFF7Cu;
    // 0x2bff7c: 0xae0200d8
    ctx->pc = 0x2bff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x2bff80: 0x8e020074
    ctx->pc = 0x2bff80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2bff84: 0x34420020
    ctx->pc = 0x2bff84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32));
    // 0x2bff88: 0xae020074
    ctx->pc = 0x2bff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2bff8c: 0x200202d
    ctx->pc = 0x2bff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff90: 0x240282d
    ctx->pc = 0x2bff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff94: 0x2a0302d
    ctx->pc = 0x2bff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff98: 0xc0afc6e
    ctx->pc = 0x2BFF98u;
    SET_GPR_U32(ctx, 31, 0x2BFFA0u);
    ctx->pc = 0x2BFF9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BF1B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setChrome_0x2bf1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFFA0u; }
    }
    if (ctx->pc != 0x2BFFA0u) { return; }
    ctx->pc = 0x2BFFA0u;
    // 0x2bffa0: 0x40902d
    ctx->pc = 0x2bffa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffa4: 0x2402ffff
    ctx->pc = 0x2bffa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bffa8: 0xae0200c4
    ctx->pc = 0x2bffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x2bffac: 0x10000007
    ctx->pc = 0x2BFFACu;
    {
        const bool branch_taken_0x2bffac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BFFB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        if (branch_taken_0x2bffac) {
            ctx->pc = 0x2BFFCCu;
            goto label_2bffcc;
        }
    }
    ctx->pc = 0x2BFFB4u;
label_2bffb4:
    // 0x2bffb4: 0xae0000d8
    ctx->pc = 0x2bffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2bffb8: 0x8e020074
    ctx->pc = 0x2bffb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2bffbc: 0x3c03ffff
    ctx->pc = 0x2bffbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2bffc0: 0x3463ffdf
    ctx->pc = 0x2bffc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65503));
    // 0x2bffc4: 0x431024
    ctx->pc = 0x2bffc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bffc8: 0xae020074
    ctx->pc = 0x2bffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_2bffcc:
    // 0x2bffcc: 0x3c030800
    ctx->pc = 0x2bffccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
label_2bffd0:
    // 0x2bffd0: 0x2231024
    ctx->pc = 0x2bffd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2bffd4: 0x50400018
    ctx->pc = 0x2BFFD4u;
    {
        const bool branch_taken_0x2bffd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bffd4) {
            ctx->pc = 0x2BFFD8u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 104)));
            ctx->pc = 0x2C0038u;
            goto label_2c0038;
        }
    }
    ctx->pc = 0x2BFFDCu;
    // 0x2bffdc: 0x3c02f7ff
    ctx->pc = 0x2bffdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)63487 << 16));
    // 0x2bffe0: 0x3442ffff
    ctx->pc = 0x2bffe0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bffe4: 0x2228824
    ctx->pc = 0x2bffe4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2bffe8: 0x2631024
    ctx->pc = 0x2bffe8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2bffec: 0x5040000c
    ctx->pc = 0x2BFFECu;
    {
        const bool branch_taken_0x2bffec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bffec) {
            ctx->pc = 0x2BFFF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->pc = 0x2C0020u;
            goto label_2c0020;
        }
    }
    ctx->pc = 0x2BFFF4u;
    // 0x2bfff4: 0x8ea50058
    ctx->pc = 0x2bfff4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x2bfff8: 0xae0500dc
    ctx->pc = 0x2bfff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x2bfffc: 0xc0afe52
    ctx->pc = 0x2BFFFCu;
    SET_GPR_U32(ctx, 31, 0x2C0004u);
    ctx->pc = 0x2C0000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BF948u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupKeepA_0x2bf948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0004u; }
    }
    if (ctx->pc != 0x2C0004u) { return; }
    ctx->pc = 0x2C0004u;
    // 0x2c0004: 0x2402ffff
    ctx->pc = 0x2c0004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0008: 0xae0200c4
    ctx->pc = 0x2c0008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x2c000c: 0x8e020074
    ctx->pc = 0x2c000cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c0010: 0x34420080
    ctx->pc = 0x2c0010u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
    // 0x2c0014: 0xae020074
    ctx->pc = 0x2c0014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2c0018: 0x10000006
    ctx->pc = 0x2C0018u;
    {
        const bool branch_taken_0x2c0018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C001Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2c0018) {
            ctx->pc = 0x2C0034u;
            goto label_2c0034;
        }
    }
    ctx->pc = 0x2C0020u;
label_2c0020:
    // 0x2c0020: 0x3c03ffff
    ctx->pc = 0x2c0020u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2c0024: 0x3463ff7f
    ctx->pc = 0x2c0024u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65407));
    // 0x2c0028: 0x431024
    ctx->pc = 0x2c0028u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c002c: 0xae020074
    ctx->pc = 0x2c002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2c0030: 0xae0000dc
    ctx->pc = 0x2c0030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
label_2c0034:
    // 0x2c0034: 0x86a30068
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 104)));
label_2c0038:
    // 0x2c0038: 0x8e0200b8
    ctx->pc = 0x2c0038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2c003c: 0x1043000b
    ctx->pc = 0x2C003Cu;
    {
        const bool branch_taken_0x2c003c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2c003c) {
            ctx->pc = 0x2C006Cu;
            goto label_2c006c;
        }
    }
    ctx->pc = 0x2C0044u;
    // 0x2c0044: 0xae0300b8
    ctx->pc = 0x2c0044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x2c0048: 0x86a20068
    ctx->pc = 0x2c0048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x2c004c: 0x44820000
    ctx->pc = 0x2c004cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c0050: 0x46800020
    ctx->pc = 0x2c0050u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c0054: 0x8fc2001c
    ctx->pc = 0x2c0054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x2c0058: 0xc44100a0
    ctx->pc = 0x2c0058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c005c: 0x46010002
    ctx->pc = 0x2c005cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0060: 0xe6000038
    ctx->pc = 0x2c0060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2c0064: 0x24020004
    ctx->pc = 0x2c0064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c0068: 0xae0200b4
    ctx->pc = 0x2c0068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2c006c:
    // 0x2c006c: 0x12200019
    ctx->pc = 0x2C006Cu;
    {
        const bool branch_taken_0x2c006c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0070u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c006c) {
            ctx->pc = 0x2C00D4u;
            goto label_2c00d4;
        }
    }
    ctx->pc = 0x2C0074u;
    // 0x2c0074: 0x260282d
    ctx->pc = 0x2c0074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0078: 0x220302d
    ctx->pc = 0x2c0078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c007c: 0xc0afc3c
    ctx->pc = 0x2C007Cu;
    SET_GPR_U32(ctx, 31, 0x2C0084u);
    ctx->pc = 0x2C0080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BF0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setPrimInfo_0x2bf0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0084u; }
    }
    if (ctx->pc != 0x2C0084u) { return; }
    ctx->pc = 0x2C0084u;
    // 0x2c0084: 0x10000014
    ctx->pc = 0x2C0084u;
    {
        const bool branch_taken_0x2c0084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0088u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 176)));
        if (branch_taken_0x2c0084) {
            ctx->pc = 0x2C00D8u;
            goto label_2c00d8;
        }
    }
    ctx->pc = 0x2C008Cu;
label_2c008c:
    // 0x2c008c: 0x10a00005
    ctx->pc = 0x2C008Cu;
    {
        const bool branch_taken_0x2c008c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c008c) {
            ctx->pc = 0x2C00A4u;
            goto label_2c00a4;
        }
    }
    ctx->pc = 0x2C0094u;
    // 0x2c0094: 0xc0afe52
    ctx->pc = 0x2C0094u;
    SET_GPR_U32(ctx, 31, 0x2C009Cu);
    ctx->pc = 0x2C0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BF948u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupKeepA_0x2bf948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C009Cu; }
    }
    if (ctx->pc != 0x2C009Cu) { return; }
    ctx->pc = 0x2C009Cu;
    // 0x2c009c: 0x1000000d
    ctx->pc = 0x2C009Cu;
    {
        const bool branch_taken_0x2c009c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C00A0u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2c009c) {
            ctx->pc = 0x2C00D4u;
            goto label_2c00d4;
        }
    }
    ctx->pc = 0x2C00A4u;
label_2c00a4:
    // 0x2c00a4: 0x1220000b
    ctx->pc = 0x2C00A4u;
    {
        const bool branch_taken_0x2c00a4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C00A8u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 65535));
        if (branch_taken_0x2c00a4) {
            ctx->pc = 0x2C00D4u;
            goto label_2c00d4;
        }
    }
    ctx->pc = 0x2C00ACu;
    // 0x2c00ac: 0x141400
    ctx->pc = 0x2c00acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 16));
    // 0x2c00b0: 0x621825
    ctx->pc = 0x2c00b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c00b4: 0x8e0200c4
    ctx->pc = 0x2c00b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2c00b8: 0x10430006
    ctx->pc = 0x2C00B8u;
    {
        const bool branch_taken_0x2c00b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2C00BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c00b8) {
            ctx->pc = 0x2C00D4u;
            goto label_2c00d4;
        }
    }
    ctx->pc = 0x2C00C0u;
    // 0x2c00c0: 0xae0300c4
    ctx->pc = 0x2c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x2c00c4: 0x280282d
    ctx->pc = 0x2c00c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00c8: 0xc0afa80
    ctx->pc = 0x2C00C8u;
    SET_GPR_U32(ctx, 31, 0x2C00D0u);
    ctx->pc = 0x2C00CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BEA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLmapInfo_0x2bea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C00D0u; }
    }
    if (ctx->pc != 0x2C00D0u) { return; }
    ctx->pc = 0x2C00D0u;
    // 0x2c00d0: 0x24160008
    ctx->pc = 0x2c00d0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8));
label_2c00d4:
    // 0x2c00d4: 0x8e1300b0
    ctx->pc = 0x2c00d4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2c00d8:
    // 0x2c00d8: 0x8e0200b4
    ctx->pc = 0x2c00d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2c00dc: 0x24430002
    ctx->pc = 0x2c00dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2));
    // 0x2c00e0: 0x24420003
    ctx->pc = 0x2c00e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
    // 0x2c00e4: 0x40202d
    ctx->pc = 0x2c00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c00e8: 0x76200a
    ctx->pc = 0x2c00e8u;
    if (GPR_U32(ctx, 22) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2c00ec: 0x24820005
    ctx->pc = 0x2c00ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 5));
    // 0x2c00f0: 0x57200b
    ctx->pc = 0x2c00f0u;
    if (GPR_U32(ctx, 23) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x2c00f4: 0x41900
    ctx->pc = 0x2c00f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2c00f8: 0x24021090
    ctx->pc = 0x2c00f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4240));
    // 0x2c00fc: 0x43a023
    ctx->pc = 0x2c00fcu;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0100: 0x3c020037
    ctx->pc = 0x2c0100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0104: 0x244228b0
    ctx->pc = 0x2c0104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10416));
    // 0x2c0108: 0x2621021
    ctx->pc = 0x2c0108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2c010c: 0x90420000
    ctx->pc = 0x2c010cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0110: 0x821821
    ctx->pc = 0x2c0110u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0114: 0x54600001
    ctx->pc = 0x2C0114u;
    {
        const bool branch_taken_0x2c0114 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c0114) {
            ctx->pc = 0x2C0118u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->pc = 0x2C011Cu;
            goto label_2c011c;
        }
    }
    ctx->pc = 0x2C011Cu;
label_2c011c:
    // 0x2c011c: 0x3c025000
    ctx->pc = 0x2c011cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2c0120: 0x621825
    ctx->pc = 0x2c0120u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0124: 0xae430000
    ctx->pc = 0x2c0124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2c0128: 0x3c020fff
    ctx->pc = 0x2c0128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2c012c: 0x3442ffff
    ctx->pc = 0x2c012cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2c0130: 0x8fa30000
    ctx->pc = 0x2c0130u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0134: 0x621024
    ctx->pc = 0x2c0134u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c0138: 0xae420004
    ctx->pc = 0x2c0138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2c013c: 0x3c020100
    ctx->pc = 0x2c013cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2c0140: 0x34420404
    ctx->pc = 0x2c0140u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1028));
    // 0x2c0144: 0xae420008
    ctx->pc = 0x2c0144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2c0148: 0x41c00
    ctx->pc = 0x2c0148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 16));
    // 0x2c014c: 0x141103
    ctx->pc = 0x2c014cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 4));
    // 0x2c0150: 0x3c046c00
    ctx->pc = 0x2c0150u;
    SET_GPR_U32(ctx, 4, ((uint32_t)27648 << 16));
    // 0x2c0154: 0x441025
    ctx->pc = 0x2c0154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0158: 0x621825
    ctx->pc = 0x2c0158u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c015c: 0x34638000
    ctx->pc = 0x2c015cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x2c0160: 0xae43000c
    ctx->pc = 0x2c0160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x2c0164: 0x12e00009
    ctx->pc = 0x2C0164u;
    {
        const bool branch_taken_0x2c0164 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0168u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x2c0164) {
            ctx->pc = 0x2C018Cu;
            goto label_2c018c;
        }
    }
    ctx->pc = 0x2C016Cu;
    // 0x2c016c: 0x7a020070
    ctx->pc = 0x2c016cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2c0170: 0x7e420000
    ctx->pc = 0x2c0170u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2c0174: 0x26440010
    ctx->pc = 0x2c0174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2c0178: 0x3c013e00
    ctx->pc = 0x2c0178u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15872 << 16));
    // 0x2c017c: 0x44816000
    ctx->pc = 0x2c017cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c0180: 0xc0b625f
    ctx->pc = 0x2C0180u;
    SET_GPR_U32(ctx, 31, 0x2C0188u);
    ctx->pc = 0x2C0184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D897Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D897C_0x2d897c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0188u; }
    }
    if (ctx->pc != 0x2C0188u) { return; }
    ctx->pc = 0x2C0188u;
    // 0x2c0188: 0x26520050
    ctx->pc = 0x2c0188u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 80));
label_2c018c:
    // 0x2c018c: 0x52c00005
    ctx->pc = 0x2C018Cu;
    {
        const bool branch_taken_0x2c018c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c018c) {
            ctx->pc = 0x2C0190u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->pc = 0x2C01A4u;
            goto label_2c01a4;
        }
    }
    ctx->pc = 0x2C0194u;
    // 0x2c0194: 0x7a020000
    ctx->pc = 0x2c0194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c0198: 0x7e420000
    ctx->pc = 0x2c0198u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2c019c: 0x26520010
    ctx->pc = 0x2c019cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 16));
    // 0x2c01a0: 0x8e0200b4
    ctx->pc = 0x2c01a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_2c01a4:
    // 0x2c01a4: 0x10400014
    ctx->pc = 0x2C01A4u;
    {
        const bool branch_taken_0x2c01a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C01A8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c01a4) {
            ctx->pc = 0x2C01F8u;
            goto label_2c01f8;
        }
    }
    ctx->pc = 0x2C01ACu;
    // 0x2c01ac: 0x8e070074
    ctx->pc = 0x2c01acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2c01b0: 0x200202d
    ctx->pc = 0x2c01b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c01b4: 0x8e0500e4
    ctx->pc = 0x2c01b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2c01b8: 0x8e0600e8
    ctx->pc = 0x2c01b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2c01bc: 0xc0afb44
    ctx->pc = 0x2C01BCu;
    SET_GPR_U32(ctx, 31, 0x2C01C4u);
    ctx->pc = 0x2C01C0u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 32));
    ctx->pc = 0x2BED10u;
    {
        const uint32_t __entryPc = ctx->pc;
        setTexShift_0x2bed10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C01C4u; }
    }
    if (ctx->pc != 0x2C01C4u) { return; }
    ctx->pc = 0x2C01C4u;
    // 0x2c01c4: 0x26030010
    ctx->pc = 0x2c01c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c01c8: 0x7a020010
    ctx->pc = 0x2c01c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c01cc: 0x7e420000
    ctx->pc = 0x2c01ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2c01d0: 0x78620010
    ctx->pc = 0x2c01d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c01d4: 0x7e420010
    ctx->pc = 0x2c01d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x2c01d8: 0x78620020
    ctx->pc = 0x2c01d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2c01dc: 0x7e420020
    ctx->pc = 0x2c01dcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x2c01e0: 0x78620030
    ctx->pc = 0x2c01e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2c01e4: 0x7e420030
    ctx->pc = 0x2c01e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x2c01e8: 0x26520040
    ctx->pc = 0x2c01e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
    // 0x2c01ec: 0x8e0200b4
    ctx->pc = 0x2c01ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2c01f0: 0x2228821
    ctx->pc = 0x2c01f0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c01f4: 0xae0000b4
    ctx->pc = 0x2c01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_2c01f8:
    // 0x2c01f8: 0x26060050
    ctx->pc = 0x2c01f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 80));
    // 0x2c01fc: 0x240382d
    ctx->pc = 0x2c01fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0200: 0x24020002
    ctx->pc = 0x2c0200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c0204: 0x40282d
    ctx->pc = 0x2c0204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0208: 0x12600002
    ctx->pc = 0x2C0208u;
    {
        const bool branch_taken_0x2c0208 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C020Cu;
        if (GPR_U32(ctx, 23) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
        if (branch_taken_0x2c0208) {
            ctx->pc = 0x2C0214u;
            goto label_2c0214;
        }
    }
    ctx->pc = 0x2C0210u;
    // 0x2c0210: 0x26310001
    ctx->pc = 0x2c0210u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2c0214:
    // 0x2c0214: 0x2258821
    ctx->pc = 0x2c0214u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c0218: 0x3c020037
    ctx->pc = 0x2c0218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c021c: 0x244225e8
    ctx->pc = 0x2c021cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9704));
    // 0x2c0220: 0x112080
    ctx->pc = 0x2c0220u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c0224: 0x821821
    ctx->pc = 0x2c0224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0228: 0x94630000
    ctx->pc = 0x2c0228u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c022c: 0xae030068
    ctx->pc = 0x2c022cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x2c0230: 0x441021
    ctx->pc = 0x2c0230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0234: 0x94420002
    ctx->pc = 0x2c0234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c0238: 0xae02006c
    ctx->pc = 0x2c0238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x2c023c: 0xae130058
    ctx->pc = 0x2c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x2c0240: 0x78c20000
    ctx->pc = 0x2c0240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c0244: 0x7ce20000
    ctx->pc = 0x2c0244u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x2c0248: 0x78c20010
    ctx->pc = 0x2c0248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c024c: 0x7ce20010
    ctx->pc = 0x2c024cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x2c0250: 0x1260002e
    ctx->pc = 0x2C0250u;
    {
        const bool branch_taken_0x2c0250 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0254u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x2c0250) {
            ctx->pc = 0x2C030Cu;
            goto label_2c030c;
        }
    }
    ctx->pc = 0x2C0258u;
    // 0x2c0258: 0x26060080
    ctx->pc = 0x2c0258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 128));
    // 0x2c025c: 0x260500a8
    ctx->pc = 0x2c025cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 168));
    // 0x2c0260: 0x131100
    ctx->pc = 0x2c0260u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 4));
    // 0x2c0264: 0x282a023
    ctx->pc = 0x2c0264u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2c0268: 0x131c00
    ctx->pc = 0x2c0268u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 16));
    // 0x2c026c: 0x141103
    ctx->pc = 0x2c026cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 4));
    // 0x2c0270: 0x3c046800
    ctx->pc = 0x2c0270u;
    SET_GPR_U32(ctx, 4, ((uint32_t)26624 << 16));
    // 0x2c0274: 0x441025
    ctx->pc = 0x2c0274u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0278: 0x621825
    ctx->pc = 0x2c0278u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c027c: 0x34638000
    ctx->pc = 0x2c027cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x2c0280: 0x2673ffff
    ctx->pc = 0x2c0280u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2c0284: 0x2402ffff
    ctx->pc = 0x2c0284u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0288: 0x1262000f
    ctx->pc = 0x2C0288u;
    {
        const bool branch_taken_0x2c0288 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C028Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2c0288) {
            ctx->pc = 0x2C02C8u;
            goto label_2c02c8;
        }
    }
    ctx->pc = 0x2C0290u;
    // 0x2c0290: 0x2404ffff
    ctx->pc = 0x2c0290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0294: 0x0
    ctx->pc = 0x2c0294u;
    // NOP
label_2c0298:
    // 0x2c0298: 0x1318c0
    ctx->pc = 0x2c0298u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
    // 0x2c029c: 0x661821
    ctx->pc = 0x2c029cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c02a0: 0x8c620000
    ctx->pc = 0x2c02a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c02a4: 0xae420004
    ctx->pc = 0x2c02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2c02a8: 0x8c620004
    ctx->pc = 0x2c02a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c02ac: 0xae420008
    ctx->pc = 0x2c02acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2c02b0: 0xb31021
    ctx->pc = 0x2c02b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2c02b4: 0x90420000
    ctx->pc = 0x2c02b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c02b8: 0xae42000c
    ctx->pc = 0x2c02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2c02bc: 0x2673ffff
    ctx->pc = 0x2c02bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2c02c0: 0x1664fff5
    ctx->pc = 0x2C02C0u;
    {
        const bool branch_taken_0x2c02c0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 4));
        ctx->pc = 0x2C02C4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x2c02c0) {
            ctx->pc = 0x2C0298u;
            goto label_2c0298;
        }
    }
    ctx->pc = 0x2C02C8u;
label_2c02c8:
    // 0x2c02c8: 0x3c020100
    ctx->pc = 0x2c02c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2c02cc: 0x34420104
    ctx->pc = 0x2c02ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 260));
    // 0x2c02d0: 0xae420004
    ctx->pc = 0x2c02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2c02d4: 0x26520008
    ctx->pc = 0x2c02d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c02d8: 0x3242000c
    ctx->pc = 0x2c02d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 12));
    // 0x2c02dc: 0x10400012
    ctx->pc = 0x2C02DCu;
    {
        const bool branch_taken_0x2c02dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C02E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c02dc) {
            ctx->pc = 0x2C0328u;
            goto label_2c0328;
        }
    }
    ctx->pc = 0x2C02E4u;
    // 0x2c02e4: 0x0
    ctx->pc = 0x2c02e4u;
    // NOP
label_2c02e8:
    // 0x2c02e8: 0xae400000
    ctx->pc = 0x2c02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2c02ec: 0x26520004
    ctx->pc = 0x2c02ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c02f0: 0x3242000c
    ctx->pc = 0x2c02f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 12));
    // 0x2c02f4: 0x0
    ctx->pc = 0x2c02f4u;
    // NOP
    // 0x2c02f8: 0x0
    ctx->pc = 0x2c02f8u;
    // NOP
    // 0x2c02fc: 0x1440fffa
    ctx->pc = 0x2C02FCu;
    {
        const bool branch_taken_0x2c02fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c02fc) {
            ctx->pc = 0x2C02E8u;
            goto label_2c02e8;
        }
    }
    ctx->pc = 0x2C0304u;
    // 0x2c0304: 0x10000008
    ctx->pc = 0x2C0304u;
    {
        const bool branch_taken_0x2c0304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C0308u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c0304) {
            ctx->pc = 0x2C0328u;
            goto label_2c0328;
        }
    }
    ctx->pc = 0x2C030Cu;
label_2c030c:
    // 0x2c030c: 0x3c020100
    ctx->pc = 0x2c030cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2c0310: 0x34420104
    ctx->pc = 0x2c0310u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 260));
    // 0x2c0314: 0xae420000
    ctx->pc = 0x2c0314u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2c0318: 0xae400004
    ctx->pc = 0x2c0318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2c031c: 0xae400008
    ctx->pc = 0x2c031cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2c0320: 0xae40000c
    ctx->pc = 0x2c0320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2c0324: 0x26420010
    ctx->pc = 0x2c0324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 16));
label_2c0328:
    // 0x2c0328: 0xdfbf00a0
    ctx->pc = 0x2c0328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c032c: 0xdfbe0090
    ctx->pc = 0x2c032cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0330: 0xdfb70080
    ctx->pc = 0x2c0330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0334: 0xdfb60070
    ctx->pc = 0x2c0334u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c0338: 0xdfb50060
    ctx->pc = 0x2c0338u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c033c: 0xdfb40050
    ctx->pc = 0x2c033cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0340: 0xdfb30040
    ctx->pc = 0x2c0340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0344: 0xdfb20030
    ctx->pc = 0x2c0344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0348: 0xdfb10020
    ctx->pc = 0x2c0348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c034c: 0xdfb00010
    ctx->pc = 0x2c034cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0350: 0x3e00008
    ctx->pc = 0x2C0350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0354u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BFD90u: goto label_2bfd90;
            case 0x2BFDA0u: goto label_2bfda0;
            case 0x2BFDCCu: goto label_2bfdcc;
            case 0x2BFDD8u: goto label_2bfdd8;
            case 0x2BFE20u: goto label_2bfe20;
            case 0x2BFE28u: goto label_2bfe28;
            case 0x2BFE2Cu: goto label_2bfe2c;
            case 0x2BFE44u: goto label_2bfe44;
            case 0x2BFE60u: goto label_2bfe60;
            case 0x2BFE78u: goto label_2bfe78;
            case 0x2BFEA4u: goto label_2bfea4;
            case 0x2BFED4u: goto label_2bfed4;
            case 0x2BFEFCu: goto label_2bfefc;
            case 0x2BFF3Cu: goto label_2bff3c;
            case 0x2BFF4Cu: goto label_2bff4c;
            case 0x2BFF58u: goto label_2bff58;
            case 0x2BFFB4u: goto label_2bffb4;
            case 0x2BFFCCu: goto label_2bffcc;
            case 0x2BFFD0u: goto label_2bffd0;
            case 0x2C0020u: goto label_2c0020;
            case 0x2C0034u: goto label_2c0034;
            case 0x2C0038u: goto label_2c0038;
            case 0x2C006Cu: goto label_2c006c;
            case 0x2C008Cu: goto label_2c008c;
            case 0x2C00A4u: goto label_2c00a4;
            case 0x2C00D4u: goto label_2c00d4;
            case 0x2C00D8u: goto label_2c00d8;
            case 0x2C011Cu: goto label_2c011c;
            case 0x2C018Cu: goto label_2c018c;
            case 0x2C01A4u: goto label_2c01a4;
            case 0x2C01F8u: goto label_2c01f8;
            case 0x2C0214u: goto label_2c0214;
            case 0x2C0298u: goto label_2c0298;
            case 0x2C02C8u: goto label_2c02c8;
            case 0x2C02E8u: goto label_2c02e8;
            case 0x2C030Cu: goto label_2c030c;
            case 0x2C0328u: goto label_2c0328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C0358u;
}
