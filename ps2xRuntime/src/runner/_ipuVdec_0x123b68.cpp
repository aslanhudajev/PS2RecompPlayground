#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ipuVdec
// Address: 0x123b68 - 0x123d1c
void _ipuVdec_0x123b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123b68u;

    // 0x123b68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x123b6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123b70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123b74: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x123b74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8208u)));
    // 0x123b78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x123b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x123b7c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x123b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x123b80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x123b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x123b84: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x123b84u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
    // 0x123b88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x123b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x123b8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x123b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x123b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x123b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123b9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x123b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123ba8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x123ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x123bac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x123bacu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x123bb0: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x123BB0u;
    {
        const bool branch_taken_0x123bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x123BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123BB0u;
            // 0x123bb4: 0x48680  sll         $s0, $a0, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bb0) {
            ctx->pc = 0x123C1Cu;
            goto label_123c1c;
        }
    }
    ctx->pc = 0x123BB8u;
    // 0x123bb8: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x123bbc: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x123bc0: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x123bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x123bc4: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x123bc8: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x123bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x123bcc: 0x0  nop
    ctx->pc = 0x123bccu;
    // NOP
label_123bd0:
    // 0x123bd0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x123bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123bd4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x123bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x123bd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123BD8u;
    {
        const bool branch_taken_0x123bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123BD8u;
            // 0x123bdc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bd8) {
            ctx->pc = 0x123BF0u;
            goto label_123bf0;
        }
    }
    ctx->pc = 0x123BE0u;
    // 0x123be0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x123be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x123be4: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x123BE4u;
    SET_GPR_U32(ctx, 31, 0x123BECu);
    ctx->pc = 0x123BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123BE4u;
            // 0x123be8: 0x8c4417bc  lw          $a0, 0x17BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BECu; }
        if (ctx->pc != 0x123BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123BECu; }
        if (ctx->pc != 0x123BECu) { return; }
    }
    ctx->pc = 0x123BECu;
    // 0x123bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123bf0:
    // 0x123bf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x123bf4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x123bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x123bf8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x123bf8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x123bfc: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x123bfcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
    // 0x123c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x123c04: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x123c08: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x123c08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x123c0c: 0x1045fff0  beq         $v0, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x123C0Cu;
    {
        const bool branch_taken_0x123c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x123C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C0Cu;
            // 0x123c10: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c0c) {
            ctx->pc = 0x123BD0u;
            goto label_123bd0;
        }
    }
    ctx->pc = 0x123C14u;
    // 0x123c14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x123C14u;
    {
        const bool branch_taken_0x123c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C14u;
            // 0x123c18: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c14) {
            ctx->pc = 0x123C38u;
            goto label_123c38;
        }
    }
    ctx->pc = 0x123C1Cu;
label_123c1c:
    // 0x123c1c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x123c20: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x123c24: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x123c28: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x123c28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x123c2c: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x123c30: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x123c34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x123c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_123c38:
    // 0x123c38: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x123c38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x123c3c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x123c3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8192u)));
    // 0x123c40: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x123c40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x123c44: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x123c44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x123c48: 0x26452108  addiu       $a1, $s2, 0x2108
    ctx->pc = 0x123c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8456));
    // 0x123c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x123c50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x123c54: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x123c54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123c58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x123c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123c5c: 0x4c1000f  bgez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x123C5Cu;
    {
        const bool branch_taken_0x123c5c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x123C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C5Cu;
            // 0x123c60: 0xae631824  sw          $v1, 0x1824($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c5c) {
            ctx->pc = 0x123C9Cu;
            goto label_123c9c;
        }
    }
    ctx->pc = 0x123C64u;
    // 0x123c64: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x123c68: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x123c68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x123c6c: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x123c6cu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8192u)));
    // 0x123c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x123c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c74: 0x0  nop
    ctx->pc = 0x123c74u;
    // NOP
label_123c78:
    // 0x123c78: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x123c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x123c7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123C7Cu;
    {
        const bool branch_taken_0x123c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C7Cu;
            // 0x123c80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c7c) {
            ctx->pc = 0x123C90u;
            goto label_123c90;
        }
    }
    ctx->pc = 0x123C84u;
    // 0x123c84: 0x8e4417bc  lw          $a0, 0x17BC($s2)
    ctx->pc = 0x123c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6076)));
    // 0x123c88: 0xc047df4  jal         func_11F7D0
    ctx->pc = 0x123C88u;
    SET_GPR_U32(ctx, 31, 0x123C90u);
    ctx->pc = 0x123C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123C88u;
            // 0x123c8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F7D0u;
    if (runtime->hasFunction(0x11F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x11F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123C90u; }
        if (ctx->pc != 0x123C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123C90u; }
        if (ctx->pc != 0x123C90u) { return; }
    }
    ctx->pc = 0x123C90u;
label_123c90:
    // 0x123c90: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123c94: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C94u;
            // 0x123c98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123C78u;
            goto label_123c78;
        }
    }
    ctx->pc = 0x123C9Cu;
label_123c9c:
    // 0x123c9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x123c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x123ca0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x123ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x123ca4: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x123ca4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x123ca8: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x123ca8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x123cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x123cb0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x123cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x123cb4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x123cb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x123cb8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123CB8u;
    {
        const bool branch_taken_0x123cb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x123CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CB8u;
            // 0x123cbc: 0xaea32098  sw          $v1, 0x2098($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cb8) {
            ctx->pc = 0x123CD0u;
            goto label_123cd0;
        }
    }
    ctx->pc = 0x123CC0u;
    // 0x123cc0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x123cc0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x123cc4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x123cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x123cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123CC8u;
    {
        const bool branch_taken_0x123cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CC8u;
            // 0x123ccc: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cc8) {
            ctx->pc = 0x123CD4u;
            goto label_123cd4;
        }
    }
    ctx->pc = 0x123CD0u;
label_123cd0:
    // 0x123cd0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x123cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_123cd4:
    // 0x123cd4: 0xae82209c  sw          $v0, 0x209C($s4)
    ctx->pc = 0x123cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8348), GPR_U32(ctx, 2));
    // 0x123cd8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x123cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x123cdc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x123cdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x123ce0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x123ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x123ce4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x123ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x123ce8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x123ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x123cec: 0xaec31908  sw          $v1, 0x1908($s6)
    ctx->pc = 0x123cecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6408), GPR_U32(ctx, 3));
    // 0x123cf0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x123cf0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x123cf4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x123cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123cf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x123cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123cfc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x123cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123d00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x123d00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123d04: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x123d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123d08: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123d0c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123d14: 0x3e00008  jr          $ra
    ctx->pc = 0x123D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D14u;
            // 0x123d18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123BD0u: goto label_123bd0;
            case 0x123BF0u: goto label_123bf0;
            case 0x123C1Cu: goto label_123c1c;
            case 0x123C38u: goto label_123c38;
            case 0x123C78u: goto label_123c78;
            case 0x123C90u: goto label_123c90;
            case 0x123C9Cu: goto label_123c9c;
            case 0x123CD0u: goto label_123cd0;
            case 0x123CD4u: goto label_123cd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123D1Cu;
}
