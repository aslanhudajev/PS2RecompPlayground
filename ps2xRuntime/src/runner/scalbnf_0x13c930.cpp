#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: scalbnf
// Address: 0x13c930 - 0x13ca90
void scalbnf_0x13c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("scalbnf_0x13c930");
#endif

    ctx->pc = 0x13c930u;

    // 0x13c930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c934: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x13c934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13c938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c93c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13c93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c940: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x13c940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x13c944: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x13c944u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x13c948: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x13c948u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x13c94c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13C94Cu;
    {
        const bool branch_taken_0x13c94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C94Cu;
            // 0x13c950: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c94c) {
            ctx->pc = 0x13C9C0u;
            goto label_13c9c0;
        }
    }
    ctx->pc = 0x13C954u;
    // 0x13c954: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x13c954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x13c958: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c958u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c95c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x13c95cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x13c960: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C960u;
    {
        const bool branch_taken_0x13c960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C960u;
            // 0x13c964: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c960) {
            ctx->pc = 0x13C978u;
            goto label_13c978;
        }
    }
    ctx->pc = 0x13C968u;
    // 0x13c968: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13c968u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c96c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x13C96Cu;
    {
        const bool branch_taken_0x13c96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C96Cu;
            // 0x13c970: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c96c) {
            ctx->pc = 0x13CA88u;
            goto label_13ca88;
        }
    }
    ctx->pc = 0x13C974u;
    // 0x13c974: 0x0  nop
    ctx->pc = 0x13c974u;
    // NOP
label_13c978:
    // 0x13c978: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x13c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x13c97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c980: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x13c980u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13c984: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13c984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c988: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13c988u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13c98c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x13c98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c990: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x13c990u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 7)));
    // 0x13c994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13c994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13c998: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x13c998u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x13c99c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x13c99cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15536u)));
    // 0x13c9a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x13c9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13c9a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C9A4u;
    {
        const bool branch_taken_0x13c9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9A4u;
            // 0x13c9a8: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9a4) {
            ctx->pc = 0x13C9C0u;
            goto label_13c9c0;
        }
    }
    ctx->pc = 0x13C9ACu;
    // 0x13c9ac: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x13c9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x13c9b0: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x13c9b0u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)16992u)));
    // 0x13c9b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13c9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c9b8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13C9B8u;
    {
        const bool branch_taken_0x13c9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9B8u;
            // 0x13c9bc: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9b8) {
            ctx->pc = 0x13CA80u;
            goto label_13ca80;
        }
    }
    ctx->pc = 0x13C9C0u;
label_13c9c0:
    // 0x13c9c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13c9c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C9C4u;
    {
        const bool branch_taken_0x13c9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9C4u;
            // 0x13c9c8: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9c4) {
            ctx->pc = 0x13C9D8u;
            goto label_13c9d8;
        }
    }
    ctx->pc = 0x13C9CCu;
    // 0x13c9cc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x13c9ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13c9d0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13C9D0u;
    {
        const bool branch_taken_0x13c9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9D0u;
            // 0x13c9d4: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9d0) {
            ctx->pc = 0x13CA80u;
            goto label_13ca80;
        }
    }
    ctx->pc = 0x13C9D8u;
label_13c9d8:
    // 0x13c9d8: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x13c9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x13c9dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13C9DCu;
    {
        const bool branch_taken_0x13c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9dc) {
            ctx->pc = 0x13CA34u;
            goto label_13ca34;
        }
    }
    ctx->pc = 0x13C9E4u;
    // 0x13c9e4: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13C9E4u;
    {
        const bool branch_taken_0x13c9e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13C9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9E4u;
            // 0x13c9e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c9e4) {
            ctx->pc = 0x13CA10u;
            goto label_13ca10;
        }
    }
    ctx->pc = 0x13C9ECu;
    // 0x13c9ec: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x13c9f0: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x13c9f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c9f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c9f8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x13c9f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x13c9fc: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x13c9fcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13ca00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13ca00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca04: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x13CA04u;
    {
        const bool branch_taken_0x13ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA04u;
            // 0x13ca08: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca04) {
            ctx->pc = 0x13CA88u;
            goto label_13ca88;
        }
    }
    ctx->pc = 0x13CA0Cu;
    // 0x13ca0c: 0x0  nop
    ctx->pc = 0x13ca0cu;
    // NOP
label_13ca10:
    // 0x13ca10: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x13ca10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x13ca14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13CA14u;
    {
        const bool branch_taken_0x13ca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA14u;
            // 0x13ca18: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)50000u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca14) {
            ctx->pc = 0x13CA54u;
            goto label_13ca54;
        }
    }
    ctx->pc = 0x13CA1Cu;
    // 0x13ca1c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x13ca1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13ca20: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x13ca20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x13ca24: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x13ca24u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)16992u)));
    // 0x13ca28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13ca28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13ca2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CA2Cu;
    {
        const bool branch_taken_0x13ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ca2c) {
            ctx->pc = 0x13CA40u;
            goto label_13ca40;
        }
    }
    ctx->pc = 0x13CA34u;
label_13ca34:
    // 0x13ca34: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x13ca34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x13ca38: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x13ca38u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x13ca3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13ca3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_13ca40:
    // 0x13ca40: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x13ca40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13ca44: 0xc04f240  jal         func_13C900
    ctx->pc = 0x13CA44u;
    SET_GPR_U32(ctx, 31, 0x13CA4Cu);
    ctx->pc = 0x13CA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA44u;
            // 0x13ca48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C900u;
    if (runtime->hasFunction(0x13C900u)) {
        auto targetFn = runtime->lookupFunction(0x13C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA4Cu; }
        if (ctx->pc != 0x13CA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysignf_0x13c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CA4Cu; }
        if (ctx->pc != 0x13CA4Cu) { return; }
    }
    ctx->pc = 0x13CA4Cu;
    // 0x13ca4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13CA4Cu;
    {
        const bool branch_taken_0x13ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA4Cu;
            // 0x13ca50: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca4c) {
            ctx->pc = 0x13CA80u;
            goto label_13ca80;
        }
    }
    ctx->pc = 0x13CA54u;
label_13ca54:
    // 0x13ca54: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x13ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x13ca58: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x13ca5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13ca5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13ca60: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x13ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x13ca64: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x13ca64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x13ca68: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x13ca68u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x13ca6c: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x13ca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x13ca70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ca70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ca74: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x13ca74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ca78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13ca78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13ca7c: 0x0  nop
    ctx->pc = 0x13ca7cu;
    // NOP
label_13ca80:
    // 0x13ca80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ca84: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x13ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13ca88:
    // 0x13ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x13CA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CA88u;
            // 0x13ca8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C978u: goto label_13c978;
            case 0x13C9C0u: goto label_13c9c0;
            case 0x13C9D8u: goto label_13c9d8;
            case 0x13CA10u: goto label_13ca10;
            case 0x13CA34u: goto label_13ca34;
            case 0x13CA40u: goto label_13ca40;
            case 0x13CA54u: goto label_13ca54;
            case 0x13CA80u: goto label_13ca80;
            case 0x13CA88u: goto label_13ca88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13CA90u;
}
