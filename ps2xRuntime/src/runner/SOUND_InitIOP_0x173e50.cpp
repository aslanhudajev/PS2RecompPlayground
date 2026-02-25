#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_InitIOP
// Address: 0x173e50 - 0x173fb8
void SOUND_InitIOP_0x173e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_InitIOP_0x173e50");
#endif

    ctx->pc = 0x173e50u;

    // 0x173e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173e54: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x173e54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x173e58: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x173e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x173e5c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x173e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x173e60: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x173e64: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173e6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173e6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e70: 0x25080e90  addiu       $t0, $t0, 0xE90
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3728));
    // 0x173e74: 0x24e70e00  addiu       $a3, $a3, 0xE00
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3584));
    // 0x173e78: 0x24c60e60  addiu       $a2, $a2, 0xE60
    ctx->pc = 0x173e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3680));
    // 0x173e7c: 0x24a50a80  addiu       $a1, $a1, 0xA80
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2688));
    // 0x173e80: 0x2484a020  addiu       $a0, $a0, -0x5FE0
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942752));
    // 0x173e84: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x173e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_173e88:
    // 0x173e88: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x173e88u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e8c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x173e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e90: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x173e94: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x173e94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x173e98: 0x29220030  slti        $v0, $t1, 0x30
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x173e9c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x173e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ea0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x173ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x173ea4: 0xa1000001  sb          $zero, 0x1($t0)
    ctx->pc = 0x173ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ea8: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x173ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eac: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x173eacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eb0: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x173eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eb4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x173eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x173eb8: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x173eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ebc: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x173ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ec0: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x173ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ec4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x173ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ec8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x173ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x173ecc: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x173eccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ed0: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x173ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ed4: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x173ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ed8: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x173ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x173edc: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x173edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x173ee0: 0xa1000004  sb          $zero, 0x4($t0)
    ctx->pc = 0x173ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ee4: 0xa0e00004  sb          $zero, 0x4($a3)
    ctx->pc = 0x173ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ee8: 0xa0c00004  sb          $zero, 0x4($a2)
    ctx->pc = 0x173ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x173eec: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x173eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ef0: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x173ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x173ef4: 0xa1000005  sb          $zero, 0x5($t0)
    ctx->pc = 0x173ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x173ef8: 0xa0e00005  sb          $zero, 0x5($a3)
    ctx->pc = 0x173ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x173efc: 0xa0c00005  sb          $zero, 0x5($a2)
    ctx->pc = 0x173efcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f00: 0xa0a00005  sb          $zero, 0x5($a1)
    ctx->pc = 0x173f00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f04: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x173f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x173f08: 0xa1000006  sb          $zero, 0x6($t0)
    ctx->pc = 0x173f08u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f0c: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x173f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f10: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x173f10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f14: 0xa0a00006  sb          $zero, 0x6($a1)
    ctx->pc = 0x173f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f18: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x173f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x173f1c: 0xa1000007  sb          $zero, 0x7($t0)
    ctx->pc = 0x173f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f20: 0xa0e00007  sb          $zero, 0x7($a3)
    ctx->pc = 0x173f20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f24: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x173f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x173f28: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x173f28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f2c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x173f30: 0xa0a00007  sb          $zero, 0x7($a1)
    ctx->pc = 0x173f30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x173f34: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x173f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x173f38: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x173f38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x173f3c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x173f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x173f40: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x173F40u;
    {
        const bool branch_taken_0x173f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F40u;
            // 0x173f44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f40) {
            ctx->pc = 0x173E88u;
            goto label_173e88;
        }
    }
    ctx->pc = 0x173F48u;
    // 0x173f48: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x173F48u;
    SET_GPR_U32(ctx, 31, 0x173F50u);
    ctx->pc = 0x173F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F48u;
            // 0x173f4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F50u; }
        if (ctx->pc != 0x173F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F50u; }
        if (ctx->pc != 0x173F50u) { return; }
    }
    ctx->pc = 0x173F50u;
label_173f50:
    // 0x173f50: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x173f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x173f54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x173f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x173f58: 0x24840ae0  addiu       $a0, $a0, 0xAE0
    ctx->pc = 0x173f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    // 0x173f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f60: 0xc04c6fa  jal         func_131BE8
    ctx->pc = 0x173F60u;
    SET_GPR_U32(ctx, 31, 0x173F68u);
    ctx->pc = 0x173F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F60u;
            // 0x173f64: 0x34452345  ori         $a1, $v0, 0x2345 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9029u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131BE8u;
    if (runtime->hasFunction(0x131BE8u)) {
        auto targetFn = runtime->lookupFunction(0x131BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F68u; }
        if (ctx->pc != 0x173F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x131be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F68u; }
        if (ctx->pc != 0x173F68u) { return; }
    }
    ctx->pc = 0x173F68u;
    // 0x173f68: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x173F68u;
    {
        const bool branch_taken_0x173f68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x173F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F68u;
            // 0x173f6c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f68) {
            ctx->pc = 0x173F98u;
            goto label_173f98;
        }
    }
    ctx->pc = 0x173F70u;
    // 0x173f70: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173F70u;
    SET_GPR_U32(ctx, 31, 0x173F78u);
    ctx->pc = 0x173F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F70u;
            // 0x173f74: 0x24841930  addiu       $a0, $a0, 0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F78u; }
        if (ctx->pc != 0x173F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F78u; }
        if (ctx->pc != 0x173F78u) { return; }
    }
    ctx->pc = 0x173F78u;
label_173f78:
    // 0x173f78: 0x0  nop
    ctx->pc = 0x173f78u;
    // NOP
    // 0x173f7c: 0x0  nop
    ctx->pc = 0x173f7cu;
    // NOP
    // 0x173f80: 0x0  nop
    ctx->pc = 0x173f80u;
    // NOP
    // 0x173f84: 0x0  nop
    ctx->pc = 0x173f84u;
    // NOP
    // 0x173f88: 0x0  nop
    ctx->pc = 0x173f88u;
    // NOP
    // 0x173f8c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x173F8Cu;
    {
        const bool branch_taken_0x173f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f8c) {
            ctx->pc = 0x173F78u;
            goto label_173f78;
        }
    }
    ctx->pc = 0x173F94u;
    // 0x173f94: 0x0  nop
    ctx->pc = 0x173f94u;
    // NOP
label_173f98:
    // 0x173f98: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173f9c: 0x8c220b04  lw          $v0, 0xB04($at)
    ctx->pc = 0x173f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2820)));
    // 0x173fa0: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x173FA0u;
    {
        const bool branch_taken_0x173fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173fa0) {
            ctx->pc = 0x173F50u;
            goto label_173f50;
        }
    }
    ctx->pc = 0x173FA8u;
    // 0x173fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x173FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FB0u;
            // 0x173fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173E88u: goto label_173e88;
            case 0x173F50u: goto label_173f50;
            case 0x173F78u: goto label_173f78;
            case 0x173F98u: goto label_173f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173FB8u;
}
