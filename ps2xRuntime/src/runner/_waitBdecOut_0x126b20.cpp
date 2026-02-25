#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _waitBdecOut
// Address: 0x126b20 - 0x126dbc
void _waitBdecOut_0x126b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_waitBdecOut_0x126b20");
#endif

    ctx->pc = 0x126b20u;

    // 0x126b20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x126b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x126b24: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x126b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x126b28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x126b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b2c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x126b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x126b30: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x126b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x126b34: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x126b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x126b38: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x126b38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126b3c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x126b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x126b40: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x126b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x126b44: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x126b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x126b48: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x126B48u;
    SET_GPR_U32(ctx, 31, 0x126B50u);
    ctx->pc = 0x126B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126B48u;
            // 0x126b4c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B50u; }
        if (ctx->pc != 0x126B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126B50u; }
        if (ctx->pc != 0x126B50u) { return; }
    }
    ctx->pc = 0x126B50u;
    // 0x126b50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x126b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x126b54: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x126b54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x126b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x126b5c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x126B5Cu;
    {
        const bool branch_taken_0x126b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B5Cu;
            // 0x126b60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b5c) {
            ctx->pc = 0x126BE4u;
            goto label_126be4;
        }
    }
    ctx->pc = 0x126B64u;
    // 0x126b64: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x126b64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x126b68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x126b6c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x126b6cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x126b70: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x126B70u;
    {
        const bool branch_taken_0x126b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b70) {
            ctx->pc = 0x126B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126B70u;
            // 0x126b74: 0x8e4210a0  lw          $v0, 0x10A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126BE8u;
            goto label_126be8;
        }
    }
    ctx->pc = 0x126B78u;
    // 0x126b78: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x126b7c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x126b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x126b80: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x126b84: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x126b88: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x126b88u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), _mm_cvtsi32_si128((int)46112u)));
    // 0x126b8c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x126b8cu;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)46080u)));
    // 0x126b90: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126b94: 0x3631b020  ori         $s1, $s1, 0xB020
    ctx->pc = 0x126b94u;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)45088u)));
    // 0x126b98: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x126b98u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8208u)));
    // 0x126b9c: 0x0  nop
    ctx->pc = 0x126b9cu;
    // NOP
label_126ba0:
    // 0x126ba0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126ba4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126BA4u;
    {
        const bool branch_taken_0x126ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ba4) {
            ctx->pc = 0x126BC8u;
            goto label_126bc8;
        }
    }
    ctx->pc = 0x126BACu;
    // 0x126bac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x126bb0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x126bb0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x126bb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126BB4u;
    {
        const bool branch_taken_0x126bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BB4u;
            // 0x126bb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bb4) {
            ctx->pc = 0x126BC8u;
            goto label_126bc8;
        }
    }
    ctx->pc = 0x126BBCu;
    // 0x126bbc: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x126bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x126bc0: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x126BC0u;
    SET_GPR_U32(ctx, 31, 0x126BC8u);
    ctx->pc = 0x126BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126BC0u;
            // 0x126bc4: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126BC8u; }
        if (ctx->pc != 0x126BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126BC8u; }
        if (ctx->pc != 0x126BC8u) { return; }
    }
    ctx->pc = 0x126BC8u;
label_126bc8:
    // 0x126bc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x126bcc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x126BCCu;
    {
        const bool branch_taken_0x126bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bcc) {
            ctx->pc = 0x126BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126BCCu;
            // 0x126bd0: 0x8e4210a0  lw          $v0, 0x10A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126BE8u;
            goto label_126be8;
        }
    }
    ctx->pc = 0x126BD4u;
    // 0x126bd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126bd8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x126bd8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x126bdc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x126BDCu;
    {
        const bool branch_taken_0x126bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bdc) {
            ctx->pc = 0x126BA0u;
            goto label_126ba0;
        }
    }
    ctx->pc = 0x126BE4u;
label_126be4:
    // 0x126be4: 0x8e4210a0  lw          $v0, 0x10A0($s2)
    ctx->pc = 0x126be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4256)));
label_126be8:
    // 0x126be8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x126BE8u;
    {
        const bool branch_taken_0x126be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126BE8u;
            // 0x126bec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126be8) {
            ctx->pc = 0x126C88u;
            goto label_126c88;
        }
    }
    ctx->pc = 0x126BF0u;
    // 0x126bf0: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x126BF0u;
    SET_GPR_U32(ctx, 31, 0x126BF8u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126BF8u; }
        if (ctx->pc != 0x126BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126BF8u; }
        if (ctx->pc != 0x126BF8u) { return; }
    }
    ctx->pc = 0x126BF8u;
    // 0x126bf8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x126bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x126bfc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x126c00: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x126c00u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)62752u)));
    // 0x126c04: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x126c08: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x126c08u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x126c0c: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x126c0cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)62864u)));
    // 0x126c10: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x126c14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x126c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x126c18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x126c18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x126c1c: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x126c1cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46080u)));
    // 0x126c20: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x126c20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x126c24: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x126c24u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)45056u)));
    // 0x126c28: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x126c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x126c2c: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x126c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x126c30: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x126c30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x126c34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x126c34u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x126c38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x126c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126c3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x126c3cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x126c40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x126c40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x126c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C44u;
    {
        const bool branch_taken_0x126c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C44u;
            // 0x126c48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c44) {
            ctx->pc = 0x126C58u;
            goto label_126c58;
        }
    }
    ctx->pc = 0x126C4Cu;
    // 0x126c4c: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x126C4Cu;
    SET_GPR_U32(ctx, 31, 0x126C54u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C54u; }
        if (ctx->pc != 0x126C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126C54u; }
        if (ctx->pc != 0x126C54u) { return; }
    }
    ctx->pc = 0x126C54u;
    // 0x126c54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x126c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_126c58:
    // 0x126c58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x126c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x126c5c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x126c5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x126c60: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x126c60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46112u)));
    // 0x126c64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x126c64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x126c68: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x126c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x126c6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x126c6cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x126c70: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x126c70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8208u)));
    // 0x126c74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x126c78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x126c7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x126c80: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x126C80u;
    {
        const bool branch_taken_0x126c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126C80u;
            // 0x126c84: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c80) {
            ctx->pc = 0x126D98u;
            goto label_126d98;
        }
    }
    ctx->pc = 0x126C88u;
label_126c88:
    // 0x126c88: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x126c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x126c8c: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x126c8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x126c90: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x126c90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x126c94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126c98: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x126c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x126c9c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x126c9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x126ca0: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126CA0u;
    {
        const bool branch_taken_0x126ca0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x126CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CA0u;
            // 0x126ca4: 0xae430838  sw          $v1, 0x838($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ca0) {
            ctx->pc = 0x126CC4u;
            goto label_126cc4;
        }
    }
    ctx->pc = 0x126CA8u;
    // 0x126ca8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x126ca8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x126cac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x126CACu;
    {
        const bool branch_taken_0x126cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CACu;
            // 0x126cb0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cac) {
            ctx->pc = 0x126CBCu;
            goto label_126cbc;
        }
    }
    ctx->pc = 0x126CB4u;
    // 0x126cb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x126CB4u;
    {
        const bool branch_taken_0x126cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CB4u;
            // 0x126cb8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cb4) {
            ctx->pc = 0x126CC8u;
            goto label_126cc8;
        }
    }
    ctx->pc = 0x126CBCu;
label_126cbc:
    // 0x126cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126CBCu;
    {
        const bool branch_taken_0x126cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CBCu;
            // 0x126cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cbc) {
            ctx->pc = 0x126CC8u;
            goto label_126cc8;
        }
    }
    ctx->pc = 0x126CC4u;
label_126cc4:
    // 0x126cc4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_126cc8:
    // 0x126cc8: 0xae42083c  sw          $v0, 0x83C($s2)
    ctx->pc = 0x126cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2108), GPR_U32(ctx, 2));
    // 0x126ccc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x126cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x126cd0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x126cd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x126cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x126cd8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x126cd8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16384u)));
    // 0x126cdc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x126CDCu;
    {
        const bool branch_taken_0x126cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126CDCu;
            // 0x126ce0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cdc) {
            ctx->pc = 0x126D90u;
            goto label_126d90;
        }
    }
    ctx->pc = 0x126CE4u;
    // 0x126ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ce8: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x126CE8u;
    SET_GPR_U32(ctx, 31, 0x126CF0u);
    ctx->pc = 0x126CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126CE8u;
            // 0x126cec: 0x24a5f1a8  addiu       $a1, $a1, -0xE58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126CF0u; }
        if (ctx->pc != 0x126CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126CF0u; }
        if (ctx->pc != 0x126CF0u) { return; }
    }
    ctx->pc = 0x126CF0u;
    // 0x126cf0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x126cf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x126cf8: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x126cfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d00: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x126D00u;
    SET_GPR_U32(ctx, 31, 0x126D08u);
    ctx->pc = 0x126D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D00u;
            // 0x126d04: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D08u; }
        if (ctx->pc != 0x126D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D08u; }
        if (ctx->pc != 0x126D08u) { return; }
    }
    ctx->pc = 0x126D08u;
    // 0x126d08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x126d0c: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x126d10: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x126d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x126d14: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x126d14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x126d18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x126d1c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x126d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x126d20: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x126D20u;
    SET_GPR_U32(ctx, 31, 0x126D28u);
    ctx->pc = 0x126D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126D20u;
            // 0x126d24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D28u; }
        if (ctx->pc != 0x126D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D28u; }
        if (ctx->pc != 0x126D28u) { return; }
    }
    ctx->pc = 0x126D28u;
    // 0x126d28: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x126D28u;
    SET_GPR_U32(ctx, 31, 0x126D30u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D30u; }
        if (ctx->pc != 0x126D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D30u; }
        if (ctx->pc != 0x126D30u) { return; }
    }
    ctx->pc = 0x126D30u;
    // 0x126d30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x126d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x126d34: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x126d38: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x126d38u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)62752u)));
    // 0x126d3c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x126d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x126d40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x126d40u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x126d44: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x126d44u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)62864u)));
    // 0x126d48: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x126d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x126d4c: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x126d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x126d50: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x126d50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x126d54: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x126d54u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45056u)));
    // 0x126d58: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x126d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x126d5c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x126d5cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x126d60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x126d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x126d64: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x126d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126d68: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x126d68u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x126d6c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x126d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x126d70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D70u;
    {
        const bool branch_taken_0x126d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126D70u;
            // 0x126d74: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d70) {
            ctx->pc = 0x126D84u;
            goto label_126d84;
        }
    }
    ctx->pc = 0x126D78u;
    // 0x126d78: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x126D78u;
    SET_GPR_U32(ctx, 31, 0x126D80u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D80u; }
        if (ctx->pc != 0x126D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126D80u; }
        if (ctx->pc != 0x126D80u) { return; }
    }
    ctx->pc = 0x126D80u;
    // 0x126d80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x126d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_126d84:
    // 0x126d84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x126d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d88: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x126d88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45088u)));
    // 0x126d8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x126d8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_126d90:
    // 0x126d90: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x126d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d94: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x126d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_126d98:
    // 0x126d98: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x126d98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x126d9c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x126d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x126da0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x126da0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126da4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x126da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126da8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x126da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126dac: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x126dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126db0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x126db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126db4: 0x3e00008  jr          $ra
    ctx->pc = 0x126DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126DB4u;
            // 0x126db8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126BA0u: goto label_126ba0;
            case 0x126BC8u: goto label_126bc8;
            case 0x126BE4u: goto label_126be4;
            case 0x126BE8u: goto label_126be8;
            case 0x126C58u: goto label_126c58;
            case 0x126C88u: goto label_126c88;
            case 0x126CBCu: goto label_126cbc;
            case 0x126CC4u: goto label_126cc4;
            case 0x126CC8u: goto label_126cc8;
            case 0x126D84u: goto label_126d84;
            case 0x126D90u: goto label_126d90;
            case 0x126D98u: goto label_126d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x126DBCu;
}
