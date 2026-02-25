#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _mbAddressIncrement
// Address: 0x126f68 - 0x127078
void _mbAddressIncrement_0x126f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_mbAddressIncrement_0x126f68");
#endif

    ctx->pc = 0x126f68u;

    // 0x126f68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x126f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x126f6c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x126f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x126f70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x126f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x126f74: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x126f74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126f78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x126f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x126f7c: 0x24160022  addiu       $s6, $zero, 0x22
    ctx->pc = 0x126f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x126f80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x126f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x126f84: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x126f88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x126f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x126f8c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x126f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x126f90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126f94: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x126f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x126f98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x126f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x126f9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fa0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x126fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x126fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_126fb0:
    // 0x126fb0: 0xc049fca  jal         func_127F28
    ctx->pc = 0x126FB0u;
    SET_GPR_U32(ctx, 31, 0x126FB8u);
    ctx->pc = 0x126FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FB0u;
            // 0x126fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127F28u;
    if (runtime->hasFunction(0x127F28u)) {
        auto targetFn = runtime->lookupFunction(0x127F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FB8u; }
        if (ctx->pc != 0x126FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x127f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FB8u; }
        if (ctx->pc != 0x126FB8u) { return; }
    }
    ctx->pc = 0x126FB8u;
    // 0x126fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fbc: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x126FBCu;
    {
        const bool branch_taken_0x126fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x126FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FBCu;
            // 0x126fc0: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fbc) {
            ctx->pc = 0x12701Cu;
            goto label_12701c;
        }
    }
    ctx->pc = 0x126FC4u;
    // 0x126fc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126FC4u;
    {
        const bool branch_taken_0x126fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fc4) {
            ctx->pc = 0x126FDCu;
            goto label_126fdc;
        }
    }
    ctx->pc = 0x126FCCu;
    // 0x126fcc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126FCCu;
    {
        const bool branch_taken_0x126fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FCCu;
            // 0x126fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fcc) {
            ctx->pc = 0x126FF0u;
            goto label_126ff0;
        }
    }
    ctx->pc = 0x126FD4u;
    // 0x126fd4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x126FD4u;
    {
        const bool branch_taken_0x126fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FD4u;
            // 0x126fd8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fd4) {
            ctx->pc = 0x12703Cu;
            goto label_12703c;
        }
    }
    ctx->pc = 0x126FDCu;
label_126fdc:
    // 0x126fdc: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x126FDCu;
    {
        const bool branch_taken_0x126fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x126fdc) {
            ctx->pc = 0x126FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126FDCu;
            // 0x126fe0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12703Cu;
            goto label_12703c;
        }
    }
    ctx->pc = 0x126FE4u;
    // 0x126fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126fe8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x126FE8u;
    {
        const bool branch_taken_0x126fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126FE8u;
            // 0x126fec: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fe8) {
            ctx->pc = 0x127040u;
            goto label_127040;
        }
    }
    ctx->pc = 0x126FF0u;
label_126ff0:
    // 0x126ff0: 0xc04a028  jal         func_1280A0
    ctx->pc = 0x126FF0u;
    SET_GPR_U32(ctx, 31, 0x126FF8u);
    ctx->pc = 0x126FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126FF0u;
            // 0x126ff4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1280A0u;
    if (runtime->hasFunction(0x1280A0u)) {
        auto targetFn = runtime->lookupFunction(0x1280A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FF8u; }
        if (ctx->pc != 0x126FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x1280a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126FF8u; }
        if (ctx->pc != 0x126FF8u) { return; }
    }
    ctx->pc = 0x126FF8u;
    // 0x126ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ffc: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x126ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x127000: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127000u;
    {
        const bool branch_taken_0x127000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127000u;
            // 0x127004: 0x2685f1c8  addiu       $a1, $s4, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127000) {
            ctx->pc = 0x127024u;
            goto label_127024;
        }
    }
    ctx->pc = 0x127008u;
    // 0x127008: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x12700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127008u;
            // 0x12700c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127008) {
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x127010u;
    // 0x127010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127014: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x127014u;
    SET_GPR_U32(ctx, 31, 0x12701Cu);
    ctx->pc = 0x127018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127014u;
            // 0x127018: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12701Cu; }
        if (ctx->pc != 0x12701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12701Cu; }
        if (ctx->pc != 0x12701Cu) { return; }
    }
    ctx->pc = 0x12701Cu;
label_12701c:
    // 0x12701c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12701Cu;
    {
        const bool branch_taken_0x12701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12701Cu;
            // 0x127020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12701c) {
            ctx->pc = 0x127040u;
            goto label_127040;
        }
    }
    ctx->pc = 0x127024u;
label_127024:
    // 0x127024: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x127024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127028:
    // 0x127028: 0xc04b010  jal         func_12C040
    ctx->pc = 0x127028u;
    SET_GPR_U32(ctx, 31, 0x127030u);
    ctx->pc = 0x12702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127028u;
            // 0x12702c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (runtime->hasFunction(0x12C040u)) {
        auto targetFn = runtime->lookupFunction(0x12C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127030u; }
        if (ctx->pc != 0x127030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x12c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127030u; }
        if (ctx->pc != 0x127030u) { return; }
    }
    ctx->pc = 0x127030u;
    // 0x127030: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x127030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x127034: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x127034u;
    {
        const bool branch_taken_0x127034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127034u;
            // 0x127038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127034) {
            ctx->pc = 0x12704Cu;
            goto label_12704c;
        }
    }
    ctx->pc = 0x12703Cu;
label_12703c:
    // 0x12703c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127040:
    // 0x127040: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x127040u;
    {
        const bool branch_taken_0x127040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127040u;
            // 0x127044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127040) {
            ctx->pc = 0x126FB0u;
            goto label_126fb0;
        }
    }
    ctx->pc = 0x127048u;
    // 0x127048: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x127048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12704c:
    // 0x12704c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x12704cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127050: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x127050u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127054: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x127054u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127058: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x127058u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12705c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12705cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127060: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x127060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x127064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x127068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12706c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12706cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127070: 0x3e00008  jr          $ra
    ctx->pc = 0x127070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127070u;
            // 0x127074: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126FB0u: goto label_126fb0;
            case 0x126FDCu: goto label_126fdc;
            case 0x126FF0u: goto label_126ff0;
            case 0x12701Cu: goto label_12701c;
            case 0x127024u: goto label_127024;
            case 0x127028u: goto label_127028;
            case 0x12703Cu: goto label_12703c;
            case 0x127040u: goto label_127040;
            case 0x12704Cu: goto label_12704c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127078u;
}
