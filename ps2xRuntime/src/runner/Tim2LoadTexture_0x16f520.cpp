#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2LoadTexture
// Address: 0x16f520 - 0x16f730
void Tim2LoadTexture_0x16f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2LoadTexture_0x16f520");
#endif

    ctx->pc = 0x16f520u;

    // 0x16f520: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x16f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x16f524: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16f528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16f52c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16f530: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f534: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f538: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f53c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x16f53cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f540: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f544: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16f544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f54c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16f54cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f550: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f554: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16f554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f55c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x16f55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f564: 0x12a30030  beq         $s5, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x16F564u;
    {
        const bool branch_taken_0x16f564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F564u;
            // 0x16f568: 0xafa900ac  sw          $t1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f564) {
            ctx->pc = 0x16F628u;
            goto label_16f628;
        }
    }
    ctx->pc = 0x16F56Cu;
    // 0x16f56c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x16f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16f570: 0x12a3002d  beq         $s5, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x16F570u;
    {
        const bool branch_taken_0x16f570 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f570) {
            ctx->pc = 0x16F628u;
            goto label_16f628;
        }
    }
    ctx->pc = 0x16F578u;
    // 0x16f578: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x16f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x16f57c: 0x12a3002a  beq         $s5, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x16F57Cu;
    {
        const bool branch_taken_0x16f57c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f57c) {
            ctx->pc = 0x16F628u;
            goto label_16f628;
        }
    }
    ctx->pc = 0x16F584u;
    // 0x16f584: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x16f584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16f588: 0x12a30025  beq         $s5, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16F588u;
    {
        const bool branch_taken_0x16f588 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f588) {
            ctx->pc = 0x16F620u;
            goto label_16f620;
        }
    }
    ctx->pc = 0x16F590u;
    // 0x16f590: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x16f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x16f594: 0x12a30022  beq         $s5, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16F594u;
    {
        const bool branch_taken_0x16f594 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f594) {
            ctx->pc = 0x16F620u;
            goto label_16f620;
        }
    }
    ctx->pc = 0x16F59Cu;
    // 0x16f59c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16f5a0: 0x12a3001d  beq         $s5, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16F5A0u;
    {
        const bool branch_taken_0x16f5a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5a0) {
            ctx->pc = 0x16F618u;
            goto label_16f618;
        }
    }
    ctx->pc = 0x16F5A8u;
    // 0x16f5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f5ac: 0x12a3001a  beq         $s5, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F5ACu;
    {
        const bool branch_taken_0x16f5ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5ac) {
            ctx->pc = 0x16F618u;
            goto label_16f618;
        }
    }
    ctx->pc = 0x16F5B4u;
    // 0x16f5b4: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x16f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x16f5b8: 0x12a30017  beq         $s5, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x16F5B8u;
    {
        const bool branch_taken_0x16f5b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5b8) {
            ctx->pc = 0x16F618u;
            goto label_16f618;
        }
    }
    ctx->pc = 0x16F5C0u;
    // 0x16f5c0: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16f5c4: 0x12a30014  beq         $s5, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16F5C4u;
    {
        const bool branch_taken_0x16f5c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5c4) {
            ctx->pc = 0x16F618u;
            goto label_16f618;
        }
    }
    ctx->pc = 0x16F5CCu;
    // 0x16f5cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f5d0: 0x12a3000d  beq         $s5, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16F5D0u;
    {
        const bool branch_taken_0x16f5d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5d0) {
            ctx->pc = 0x16F608u;
            goto label_16f608;
        }
    }
    ctx->pc = 0x16F5D8u;
    // 0x16f5d8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x16f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x16f5dc: 0x12a3000a  beq         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16F5DCu;
    {
        const bool branch_taken_0x16f5dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5dc) {
            ctx->pc = 0x16F608u;
            goto label_16f608;
        }
    }
    ctx->pc = 0x16F5E4u;
    // 0x16f5e4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F5E4u;
    {
        const bool branch_taken_0x16f5e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5e4) {
            ctx->pc = 0x16F600u;
            goto label_16f600;
        }
    }
    ctx->pc = 0x16F5ECu;
    // 0x16f5ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x16f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x16f5f0: 0x12a30003  beq         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F5F0u;
    {
        const bool branch_taken_0x16f5f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f5f0) {
            ctx->pc = 0x16F600u;
            goto label_16f600;
        }
    }
    ctx->pc = 0x16F5F8u;
    // 0x16f5f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16F5F8u;
    {
        const bool branch_taken_0x16f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f5f8) {
            ctx->pc = 0x16F640u;
            goto label_16f640;
        }
    }
    ctx->pc = 0x16F600u;
label_16f600:
    // 0x16f600: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16F600u;
    {
        const bool branch_taken_0x16f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F600u;
            // 0x16f604: 0x13f080  sll         $fp, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f600) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F608u;
label_16f608:
    // 0x16f608: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x16f60c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16F60Cu;
    {
        const bool branch_taken_0x16f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F60Cu;
            // 0x16f610: 0x73f021  addu        $fp, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f60c) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F614u;
    // 0x16f614: 0x0  nop
    ctx->pc = 0x16f614u;
    // NOP
label_16f618:
    // 0x16f618: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F618u;
            // 0x16f61c: 0x13f040  sll         $fp, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F620u;
label_16f620:
    // 0x16f620: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16F620u;
    {
        const bool branch_taken_0x16f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F620u;
            // 0x16f624: 0x260f02d  daddu       $fp, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f620) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F628u;
label_16f628:
    // 0x16f628: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F628u;
    {
        const bool branch_taken_0x16f628 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x16F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F628u;
            // 0x16f62c: 0x13f043  sra         $fp, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f628) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F630u;
    // 0x16f630: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x16f630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16f634: 0x3f043  sra         $fp, $v1, 1
    ctx->pc = 0x16f634u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 1));
    // 0x16f638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F638u;
    {
        const bool branch_taken_0x16f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f638) {
            ctx->pc = 0x16F648u;
            goto label_16f648;
        }
    }
    ctx->pc = 0x16F640u;
label_16f640:
    // 0x16f640: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16F640u;
    {
        const bool branch_taken_0x16f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f640) {
            ctx->pc = 0x16F700u;
            goto label_16f700;
        }
    }
    ctx->pc = 0x16F648u;
label_16f648:
    // 0x16f648: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x16f64c: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x16f64cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65472u)));
    // 0x16f650: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x16f650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16f654: 0x7e001a  div         $zero, $v1, $fp
    ctx->pc = 0x16f654u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16f658: 0x0  nop
    ctx->pc = 0x16f658u;
    // NOP
    // 0x16f65c: 0x0  nop
    ctx->pc = 0x16f65cu;
    // NOP
    // 0x16f660: 0x8012  mflo        $s0
    ctx->pc = 0x16f660u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x16f664: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x16F664u;
    {
        const bool branch_taken_0x16f664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F664u;
            // 0x16f668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f664) {
            ctx->pc = 0x16F700u;
            goto label_16f700;
        }
    }
    ctx->pc = 0x16F66Cu;
    // 0x16f66c: 0x0  nop
    ctx->pc = 0x16f66cu;
    // NOP
label_16f670:
    // 0x16f670: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x16f674: 0x3d12018  mult        $a0, $fp, $s1
    ctx->pc = 0x16f674u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16f678: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x16f67c: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x16f67cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16f680: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F680u;
    {
        const bool branch_taken_0x16f680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F680u;
            // 0x16f684: 0x44b821  addu        $s7, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f680) {
            ctx->pc = 0x16F690u;
            goto label_16f690;
        }
    }
    ctx->pc = 0x16F688u;
    // 0x16f688: 0x2518023  subu        $s0, $s2, $s1
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x16f68c: 0x0  nop
    ctx->pc = 0x16f68cu;
    // NOP
label_16f690:
    // 0x16f690: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x16f690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x16f694: 0x16343c  dsll32      $a2, $s6, 16
    ctx->pc = 0x16f694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 16));
    // 0x16f698: 0x153c3c  dsll32      $a3, $s5, 16
    ctx->pc = 0x16f698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << (32 + 16));
    // 0x16f69c: 0x114c3c  dsll32      $t1, $s1, 16
    ctx->pc = 0x16f69cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 16));
    // 0x16f6a0: 0x13543c  dsll32      $t2, $s3, 16
    ctx->pc = 0x16f6a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) << (32 + 16));
    // 0x16f6a4: 0x105c3c  dsll32      $t3, $s0, 16
    ctx->pc = 0x16f6a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16f6a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x16f6a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x16f6ac: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x16f6acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x16f6b0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x16f6b0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x16f6b4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x16f6b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x16f6b8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x16f6b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x16f6bc: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x16f6bcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x16f6c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16f6c4: 0xc042f68  jal         func_10BDA0
    ctx->pc = 0x16F6C4u;
    SET_GPR_U32(ctx, 31, 0x16F6CCu);
    ctx->pc = 0x16F6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6C4u;
            // 0x16f6c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BDA0u;
    if (runtime->hasFunction(0x10BDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10BDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6CCu; }
        if (ctx->pc != 0x16F6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x10bda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6CCu; }
        if (ctx->pc != 0x16F6CCu) { return; }
    }
    ctx->pc = 0x16F6CCu;
    // 0x16f6cc: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x16F6CCu;
    SET_GPR_U32(ctx, 31, 0x16F6D4u);
    ctx->pc = 0x16F6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6CCu;
            // 0x16f6d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6D4u; }
        if (ctx->pc != 0x16F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6D4u; }
        if (ctx->pc != 0x16F6D4u) { return; }
    }
    ctx->pc = 0x16F6D4u;
    // 0x16f6d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x16f6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6d8: 0xc042fe2  jal         func_10BF88
    ctx->pc = 0x16F6D8u;
    SET_GPR_U32(ctx, 31, 0x16F6E0u);
    ctx->pc = 0x16F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6D8u;
            // 0x16f6dc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF88u;
    if (runtime->hasFunction(0x10BF88u)) {
        auto targetFn = runtime->lookupFunction(0x10BF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E0u; }
        if (ctx->pc != 0x16F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x10bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E0u; }
        if (ctx->pc != 0x16F6E0u) { return; }
    }
    ctx->pc = 0x16F6E0u;
    // 0x16f6e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6e4: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x16F6E4u;
    SET_GPR_U32(ctx, 31, 0x16F6ECu);
    ctx->pc = 0x16F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6E4u;
            // 0x16f6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6ECu; }
        if (ctx->pc != 0x16F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F6ECu; }
        if (ctx->pc != 0x16F6ECu) { return; }
    }
    ctx->pc = 0x16F6ECu;
    // 0x16f6ec: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x16f6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x16f6f0: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x16f6f4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16F6F4u;
    {
        const bool branch_taken_0x16f6f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f6f4) {
            ctx->pc = 0x16F670u;
            goto label_16f670;
        }
    }
    ctx->pc = 0x16F6FCu;
    // 0x16f6fc: 0x0  nop
    ctx->pc = 0x16f6fcu;
    // NOP
label_16f700:
    // 0x16f700: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16f700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16f704: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16f704u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16f708: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16f708u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16f70c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16f70cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16f710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16f710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16f714: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16f714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f718: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f718u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f71c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f728: 0x3e00008  jr          $ra
    ctx->pc = 0x16F728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F728u;
            // 0x16f72c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F600u: goto label_16f600;
            case 0x16F608u: goto label_16f608;
            case 0x16F618u: goto label_16f618;
            case 0x16F620u: goto label_16f620;
            case 0x16F628u: goto label_16f628;
            case 0x16F640u: goto label_16f640;
            case 0x16F648u: goto label_16f648;
            case 0x16F670u: goto label_16f670;
            case 0x16F690u: goto label_16f690;
            case 0x16F700u: goto label_16f700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F730u;
}
