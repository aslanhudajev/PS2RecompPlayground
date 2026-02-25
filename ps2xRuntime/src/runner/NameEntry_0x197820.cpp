#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: NameEntry
// Address: 0x197820 - 0x197ed4
void NameEntry_0x197820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("NameEntry_0x197820");
#endif

    ctx->pc = 0x197820u;

    // 0x197820: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x197820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x197824: 0x148000d4  bnez        $a0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x197824u;
    {
        const bool branch_taken_0x197824 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x197828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197824u;
            // 0x197828: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197824) {
            ctx->pc = 0x197B78u;
            goto label_197b78;
        }
    }
    ctx->pc = 0x19782Cu;
    // 0x19782c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197830: 0x8c222318  lw          $v0, 0x2318($at)
    ctx->pc = 0x197830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8984)));
    // 0x197834: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x197834u;
    {
        const bool branch_taken_0x197834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197834u;
            // 0x197838: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197834) {
            ctx->pc = 0x197888u;
            goto label_197888;
        }
    }
    ctx->pc = 0x19783Cu;
    // 0x19783c: 0x8c231910  lw          $v1, 0x1910($at)
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197840: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x197840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197844: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
    ctx->pc = 0x197844u;
    {
        const bool branch_taken_0x197844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197844u;
            // 0x197848: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197844) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x19784Cu;
    // 0x19784c: 0x24421934  addiu       $v0, $v0, 0x1934
    ctx->pc = 0x19784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6452));
    // 0x197850: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197854: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19785c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19785cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197860: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197864: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x197864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x197868: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x197868u;
    {
        const bool branch_taken_0x197868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197868) {
            ctx->pc = 0x197878u;
            goto label_197878;
        }
    }
    ctx->pc = 0x197870u;
    // 0x197870: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x197870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x197874: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_197878:
    // 0x197878: 0xc05d110  jal         func_174440
    ctx->pc = 0x197878u;
    SET_GPR_U32(ctx, 31, 0x197880u);
    ctx->pc = 0x19787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197878u;
            // 0x19787c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197880u; }
        if (ctx->pc != 0x197880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197880u; }
        if (ctx->pc != 0x197880u) { return; }
    }
    ctx->pc = 0x197880u;
    // 0x197880: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x197880u;
    {
        const bool branch_taken_0x197880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197880) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x197888u;
label_197888:
    // 0x197888: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19788c: 0x8c222310  lw          $v0, 0x2310($at)
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8976)));
    // 0x197890: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197890u;
    {
        const bool branch_taken_0x197890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197890u;
            // 0x197894: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197890) {
            ctx->pc = 0x1978E8u;
            goto label_1978e8;
        }
    }
    ctx->pc = 0x197898u;
    // 0x197898: 0x8c231910  lw          $v1, 0x1910($at)
    ctx->pc = 0x197898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x19789c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x19789cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1978a0: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x1978A0u;
    {
        const bool branch_taken_0x1978a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978A0u;
            // 0x1978a4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978a0) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x1978A8u;
    // 0x1978a8: 0x24421934  addiu       $v0, $v0, 0x1934
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6452));
    // 0x1978ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1978acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1978b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1978b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1978b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1978b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1978b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1978b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1978bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1978bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1978c0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1978c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1978c4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1978C4u;
    {
        const bool branch_taken_0x1978c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1978c4) {
            ctx->pc = 0x1978D8u;
            goto label_1978d8;
        }
    }
    ctx->pc = 0x1978CCu;
    // 0x1978cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1978d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1978d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1978d4: 0x0  nop
    ctx->pc = 0x1978d4u;
    // NOP
label_1978d8:
    // 0x1978d8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1978D8u;
    SET_GPR_U32(ctx, 31, 0x1978E0u);
    ctx->pc = 0x1978DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978D8u;
            // 0x1978dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978E0u; }
        if (ctx->pc != 0x1978E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978E0u; }
        if (ctx->pc != 0x1978E0u) { return; }
    }
    ctx->pc = 0x1978E0u;
    // 0x1978e0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1978E0u;
    {
        const bool branch_taken_0x1978e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978e0) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x1978E8u;
label_1978e8:
    // 0x1978e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1978e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1978ec: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x1978ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x1978f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1978F0u;
    {
        const bool branch_taken_0x1978f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1978F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978F0u;
            // 0x1978f4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978f0) {
            ctx->pc = 0x197918u;
            goto label_197918;
        }
    }
    ctx->pc = 0x1978F8u;
    // 0x1978f8: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x1978f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1978fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1978FCu;
    {
        const bool branch_taken_0x1978fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1978fc) {
            ctx->pc = 0x197918u;
            goto label_197918;
        }
    }
    ctx->pc = 0x197904u;
    // 0x197904: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197908: 0x8c221908  lw          $v0, 0x1908($at)
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6408)));
    // 0x19790c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19790Cu;
    {
        const bool branch_taken_0x19790c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19790c) {
            ctx->pc = 0x197980u;
            goto label_197980;
        }
    }
    ctx->pc = 0x197914u;
    // 0x197914: 0x0  nop
    ctx->pc = 0x197914u;
    // NOP
label_197918:
    // 0x197918: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19791c: 0x8c221910  lw          $v0, 0x1910($at)
    ctx->pc = 0x19791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197924: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197928: 0xac221910  sw          $v0, 0x1910($at)
    ctx->pc = 0x197928u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6416), GPR_U32(ctx, 2));
    // 0x19792c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x19792cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197930: 0x8c241910  lw          $a0, 0x1910($at)
    ctx->pc = 0x197930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197934: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x197934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197938: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x197938u;
    {
        const bool branch_taken_0x197938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197938u;
            // 0x19793c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197938) {
            ctx->pc = 0x197960u;
            goto label_197960;
        }
    }
    ctx->pc = 0x197940u;
    // 0x197940: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x197940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x197944: 0x24631933  addiu       $v1, $v1, 0x1933
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6451));
    // 0x197948: 0x24421934  addiu       $v0, $v0, 0x1934
    ctx->pc = 0x197948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6452));
    // 0x19794c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197954: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x197954u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197958u;
    {
        const bool branch_taken_0x197958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19795Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197958u;
            // 0x19795c: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197958) {
            ctx->pc = 0x197970u;
            goto label_197970;
        }
    }
    ctx->pc = 0x197960u;
label_197960:
    // 0x197960: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x197964: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197968: 0xa02218f0  sb          $v0, 0x18F0($at)
    ctx->pc = 0x197968u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6384), (uint8_t)GPR_U32(ctx, 2));
    // 0x19796c: 0x0  nop
    ctx->pc = 0x19796cu;
    // NOP
label_197970:
    // 0x197970: 0xc05d110  jal         func_174440
    ctx->pc = 0x197970u;
    SET_GPR_U32(ctx, 31, 0x197978u);
    ctx->pc = 0x197974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197970u;
            // 0x197974: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197978u; }
        if (ctx->pc != 0x197978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197978u; }
        if (ctx->pc != 0x197978u) { return; }
    }
    ctx->pc = 0x197978u;
    // 0x197978: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x197978u;
    {
        const bool branch_taken_0x197978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197978) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x197980u;
label_197980:
    // 0x197980: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197984: 0x8c222410  lw          $v0, 0x2410($at)
    ctx->pc = 0x197984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x197988: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x197988u;
    {
        const bool branch_taken_0x197988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197988u;
            // 0x19798c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197988) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x197990u;
    // 0x197990: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197994: 0x8c241910  lw          $a0, 0x1910($at)
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197998: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197998u;
    {
        const bool branch_taken_0x197998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x19799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197998u;
            // 0x19799c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197998) {
            ctx->pc = 0x1979E0u;
            goto label_1979e0;
        }
    }
    ctx->pc = 0x1979A0u;
    // 0x1979a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1979a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1979a4: 0x24421934  addiu       $v0, $v0, 0x1934
    ctx->pc = 0x1979a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6452));
    // 0x1979a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1979a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1979ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1979acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1979b0: 0xa02318f0  sb          $v1, 0x18F0($at)
    ctx->pc = 0x1979b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6384), (uint8_t)GPR_U32(ctx, 3));
    // 0x1979b4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1979b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1979b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1979b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1979bc: 0x8c221910  lw          $v0, 0x1910($at)
    ctx->pc = 0x1979bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x1979c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1979c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1979c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1979c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1979c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1979cc: 0xc05d110  jal         func_174440
    ctx->pc = 0x1979CCu;
    SET_GPR_U32(ctx, 31, 0x1979D4u);
    ctx->pc = 0x1979D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979CCu;
            // 0x1979d0: 0xac221910  sw          $v0, 0x1910($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D4u; }
        if (ctx->pc != 0x1979D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D4u; }
        if (ctx->pc != 0x1979D4u) { return; }
    }
    ctx->pc = 0x1979D4u;
    // 0x1979d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1979D4u;
    {
        const bool branch_taken_0x1979d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979d4) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x1979DCu;
    // 0x1979dc: 0x0  nop
    ctx->pc = 0x1979dcu;
    // NOP
label_1979e0:
    // 0x1979e0: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1979E0u;
    {
        const bool branch_taken_0x1979e0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1979E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979E0u;
            // 0x1979e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979e0) {
            ctx->pc = 0x197A20u;
            goto label_197a20;
        }
    }
    ctx->pc = 0x1979E8u;
    // 0x1979e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1979e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1979ec: 0x24421934  addiu       $v0, $v0, 0x1934
    ctx->pc = 0x1979ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6452));
    // 0x1979f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1979f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1979f8: 0xa02318f0  sb          $v1, 0x18F0($at)
    ctx->pc = 0x1979f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6384), (uint8_t)GPR_U32(ctx, 3));
    // 0x1979fc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1979fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x197a00: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a04: 0x8c221910  lw          $v0, 0x1910($at)
    ctx->pc = 0x197a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197a08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197a10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a14: 0xc05d110  jal         func_174440
    ctx->pc = 0x197A14u;
    SET_GPR_U32(ctx, 31, 0x197A1Cu);
    ctx->pc = 0x197A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A14u;
            // 0x197a18: 0xac221910  sw          $v0, 0x1910($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A1Cu; }
        if (ctx->pc != 0x197A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A1Cu; }
        if (ctx->pc != 0x197A1Cu) { return; }
    }
    ctx->pc = 0x197A1Cu;
    // 0x197a1c: 0x0  nop
    ctx->pc = 0x197a1cu;
    // NOP
label_197a20:
    // 0x197a20: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a24: 0x8c221910  lw          $v0, 0x1910($at)
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6416)));
    // 0x197a28: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x197a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197a2c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x197A2Cu;
    {
        const bool branch_taken_0x197a2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A2Cu;
            // 0x197a30: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a2c) {
            ctx->pc = 0x197A58u;
            goto label_197a58;
        }
    }
    ctx->pc = 0x197A34u;
    // 0x197a34: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x197a38: 0xa02018f0  sb          $zero, 0x18F0($at)
    ctx->pc = 0x197a38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6384), (uint8_t)GPR_U32(ctx, 0));
    // 0x197a3c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a40: 0x8c241900  lw          $a0, 0x1900($at)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6400)));
    // 0x197a44: 0xc066038  jal         func_1980E0
    ctx->pc = 0x197A44u;
    SET_GPR_U32(ctx, 31, 0x197A4Cu);
    ctx->pc = 0x197A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A44u;
            // 0x197a48: 0x24a51920  addiu       $a1, $a1, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980E0u;
    if (runtime->hasFunction(0x1980E0u)) {
        auto targetFn = runtime->lookupFunction(0x1980E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A4Cu; }
        if (ctx->pc != 0x197A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RankingInsertName_0x1980e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A4Cu; }
        if (ctx->pc != 0x197A4Cu) { return; }
    }
    ctx->pc = 0x197A4Cu;
    // 0x197a4c: 0xc056f28  jal         func_15BCA0
    ctx->pc = 0x197A4Cu;
    SET_GPR_U32(ctx, 31, 0x197A54u);
    ctx->pc = 0x197A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A4Cu;
            // 0x197a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCA0u;
    if (runtime->hasFunction(0x15BCA0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A54u; }
        if (ctx->pc != 0x197A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnsetNameEntry_0x15bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A54u; }
        if (ctx->pc != 0x197A54u) { return; }
    }
    ctx->pc = 0x197A54u;
    // 0x197a54: 0x0  nop
    ctx->pc = 0x197a54u;
    // NOP
label_197a58:
    // 0x197a58: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a5c: 0x802718f0  lb          $a3, 0x18F0($at)
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 6384)));
    // 0x197a60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197a64: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x197a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x197a68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197a6c: 0x24a52890  addiu       $a1, $a1, 0x2890
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10384));
    // 0x197a70: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197A70u;
    SET_GPR_U32(ctx, 31, 0x197A78u);
    ctx->pc = 0x197A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A70u;
            // 0x197a74: 0x24c61934  addiu       $a2, $a2, 0x1934 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A78u; }
        if (ctx->pc != 0x197A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A78u; }
        if (ctx->pc != 0x197A78u) { return; }
    }
    ctx->pc = 0x197A78u;
    // 0x197a78: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x197a7c: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x197a80: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197a84: 0xc060a44  jal         func_182910
    ctx->pc = 0x197A84u;
    SET_GPR_U32(ctx, 31, 0x197A8Cu);
    ctx->pc = 0x197A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A84u;
            // 0x197a88: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A8Cu; }
        if (ctx->pc != 0x197A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A8Cu; }
        if (ctx->pc != 0x197A8Cu) { return; }
    }
    ctx->pc = 0x197A8Cu;
    // 0x197a8c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197a90: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x197a94: 0x8c261900  lw          $a2, 0x1900($at)
    ctx->pc = 0x197a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6400)));
    // 0x197a98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197a9c: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x197a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
    // 0x197aa0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197aa4: 0x24a52898  addiu       $a1, $a1, 0x2898
    ctx->pc = 0x197aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10392));
    // 0x197aa8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x197aac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x197ab0: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197AB0u;
    SET_GPR_U32(ctx, 31, 0x197AB8u);
    ctx->pc = 0x197AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197AB0u;
            // 0x197ab4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AB8u; }
        if (ctx->pc != 0x197AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AB8u; }
        if (ctx->pc != 0x197AB8u) { return; }
    }
    ctx->pc = 0x197AB8u;
    // 0x197ab8: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x197abc: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x197abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x197ac0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197ac4: 0xc060a44  jal         func_182910
    ctx->pc = 0x197AC4u;
    SET_GPR_U32(ctx, 31, 0x197ACCu);
    ctx->pc = 0x197AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197AC4u;
            // 0x197ac8: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197ACCu; }
        if (ctx->pc != 0x197ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197ACCu; }
        if (ctx->pc != 0x197ACCu) { return; }
    }
    ctx->pc = 0x197ACCu;
    // 0x197acc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197ad0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197ad4: 0x8c2618f8  lw          $a2, 0x18F8($at)
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6392)));
    // 0x197ad8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197adc: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197ADCu;
    SET_GPR_U32(ctx, 31, 0x197AE4u);
    ctx->pc = 0x197AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197ADCu;
            // 0x197ae0: 0x24a528a0  addiu       $a1, $a1, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AE4u; }
        if (ctx->pc != 0x197AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AE4u; }
        if (ctx->pc != 0x197AE4u) { return; }
    }
    ctx->pc = 0x197AE4u;
    // 0x197ae4: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x197ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x197ae8: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x197ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x197aec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197af0: 0xc060a44  jal         func_182910
    ctx->pc = 0x197AF0u;
    SET_GPR_U32(ctx, 31, 0x197AF8u);
    ctx->pc = 0x197AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197AF0u;
            // 0x197af4: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AF8u; }
        if (ctx->pc != 0x197AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197AF8u; }
        if (ctx->pc != 0x197AF8u) { return; }
    }
    ctx->pc = 0x197AF8u;
    // 0x197af8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197afc: 0x8c221908  lw          $v0, 0x1908($at)
    ctx->pc = 0x197afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6408)));
    // 0x197b00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197B00u;
    {
        const bool branch_taken_0x197b00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x197B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B00u;
            // 0x197b04: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b00) {
            ctx->pc = 0x197B10u;
            goto label_197b10;
        }
    }
    ctx->pc = 0x197B08u;
    // 0x197b08: 0xac201908  sw          $zero, 0x1908($at)
    ctx->pc = 0x197b08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6408), GPR_U32(ctx, 0));
    // 0x197b0c: 0x0  nop
    ctx->pc = 0x197b0cu;
    // NOP
label_197b10:
    // 0x197b10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197b14: 0x8c231908  lw          $v1, 0x1908($at)
    ctx->pc = 0x197b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6408)));
    // 0x197b18: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x197b1c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x197b1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x197b20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197b24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197b28: 0x24a528a8  addiu       $a1, $a1, 0x28A8
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10408));
    // 0x197b2c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x197b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197b30: 0x0  nop
    ctx->pc = 0x197b30u;
    // NOP
    // 0x197b34: 0x0  nop
    ctx->pc = 0x197b34u;
    // NOP
    // 0x197b38: 0x1010  mfhi        $v0
    ctx->pc = 0x197b38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x197b3c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x197b40: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x197b44: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197B44u;
    SET_GPR_U32(ctx, 31, 0x197B4Cu);
    ctx->pc = 0x197B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B44u;
            // 0x197b48: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B4Cu; }
        if (ctx->pc != 0x197B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B4Cu; }
        if (ctx->pc != 0x197B4Cu) { return; }
    }
    ctx->pc = 0x197B4Cu;
    // 0x197b4c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x197b50: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x197b54: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197b58: 0xc060a44  jal         func_182910
    ctx->pc = 0x197B58u;
    SET_GPR_U32(ctx, 31, 0x197B60u);
    ctx->pc = 0x197B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B58u;
            // 0x197b5c: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B60u; }
        if (ctx->pc != 0x197B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B60u; }
        if (ctx->pc != 0x197B60u) { return; }
    }
    ctx->pc = 0x197B60u;
    // 0x197b60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197b64: 0x8c231908  lw          $v1, 0x1908($at)
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6408)));
    // 0x197b68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x197b6c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197b70: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x197B70u;
    {
        const bool branch_taken_0x197b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B70u;
            // 0x197b74: 0xac231908  sw          $v1, 0x1908($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b70) {
            ctx->pc = 0x197EC8u;
            goto label_197ec8;
        }
    }
    ctx->pc = 0x197B78u;
label_197b78:
    // 0x197b78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197b7c: 0x8c2222a8  lw          $v0, 0x22A8($at)
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8872)));
    // 0x197b80: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197B80u;
    {
        const bool branch_taken_0x197b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B80u;
            // 0x197b84: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b80) {
            ctx->pc = 0x197BD8u;
            goto label_197bd8;
        }
    }
    ctx->pc = 0x197B88u;
    // 0x197b88: 0x8c231914  lw          $v1, 0x1914($at)
    ctx->pc = 0x197b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197b8c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x197b8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197b90: 0x10200077  beqz        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x197B90u;
    {
        const bool branch_taken_0x197b90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B90u;
            // 0x197b94: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b90) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197B98u;
    // 0x197b98: 0x2442194c  addiu       $v0, $v0, 0x194C
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6476));
    // 0x197b9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197ba0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197ba0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197ba8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197bac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197bb0: 0x28410020  slti        $at, $v0, 0x20
    ctx->pc = 0x197bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x197bb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x197BB4u;
    {
        const bool branch_taken_0x197bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197bb4) {
            ctx->pc = 0x197BC8u;
            goto label_197bc8;
        }
    }
    ctx->pc = 0x197BBCu;
    // 0x197bbc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x197bc0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197bc4: 0x0  nop
    ctx->pc = 0x197bc4u;
    // NOP
label_197bc8:
    // 0x197bc8: 0xc05d110  jal         func_174440
    ctx->pc = 0x197BC8u;
    SET_GPR_U32(ctx, 31, 0x197BD0u);
    ctx->pc = 0x197BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197BC8u;
            // 0x197bcc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BD0u; }
        if (ctx->pc != 0x197BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197BD0u; }
        if (ctx->pc != 0x197BD0u) { return; }
    }
    ctx->pc = 0x197BD0u;
    // 0x197bd0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x197BD0u;
    {
        const bool branch_taken_0x197bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197bd0) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197BD8u;
label_197bd8:
    // 0x197bd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197bdc: 0x8c2222a0  lw          $v0, 0x22A0($at)
    ctx->pc = 0x197bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8864)));
    // 0x197be0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x197BE0u;
    {
        const bool branch_taken_0x197be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BE0u;
            // 0x197be4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197be0) {
            ctx->pc = 0x197C38u;
            goto label_197c38;
        }
    }
    ctx->pc = 0x197BE8u;
    // 0x197be8: 0x8c231914  lw          $v1, 0x1914($at)
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197bec: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x197becu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197bf0: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x197BF0u;
    {
        const bool branch_taken_0x197bf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BF0u;
            // 0x197bf4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf0) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197BF8u;
    // 0x197bf8: 0x2442194c  addiu       $v0, $v0, 0x194C
    ctx->pc = 0x197bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6476));
    // 0x197bfc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197c00: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197c08: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197c0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x197c0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197c10: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x197c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x197c14: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x197C14u;
    {
        const bool branch_taken_0x197c14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c14) {
            ctx->pc = 0x197C28u;
            goto label_197c28;
        }
    }
    ctx->pc = 0x197C1Cu;
    // 0x197c1c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x197c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x197c20: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x197c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x197c24: 0x0  nop
    ctx->pc = 0x197c24u;
    // NOP
label_197c28:
    // 0x197c28: 0xc05d110  jal         func_174440
    ctx->pc = 0x197C28u;
    SET_GPR_U32(ctx, 31, 0x197C30u);
    ctx->pc = 0x197C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C28u;
            // 0x197c2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C30u; }
        if (ctx->pc != 0x197C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C30u; }
        if (ctx->pc != 0x197C30u) { return; }
    }
    ctx->pc = 0x197C30u;
    // 0x197c30: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x197C30u;
    {
        const bool branch_taken_0x197c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c30) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197C38u;
label_197c38:
    // 0x197c38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197c3c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x197c40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x197C40u;
    {
        const bool branch_taken_0x197c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C40u;
            // 0x197c44: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c40) {
            ctx->pc = 0x197C68u;
            goto label_197c68;
        }
    }
    ctx->pc = 0x197C48u;
    // 0x197c48: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x197c4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197C4Cu;
    {
        const bool branch_taken_0x197c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197c4c) {
            ctx->pc = 0x197C68u;
            goto label_197c68;
        }
    }
    ctx->pc = 0x197C54u;
    // 0x197c54: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197c58: 0x8c22190c  lw          $v0, 0x190C($at)
    ctx->pc = 0x197c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6412)));
    // 0x197c5c: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x197C5Cu;
    {
        const bool branch_taken_0x197c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x197c5c) {
            ctx->pc = 0x197CD0u;
            goto label_197cd0;
        }
    }
    ctx->pc = 0x197C64u;
    // 0x197c64: 0x0  nop
    ctx->pc = 0x197c64u;
    // NOP
label_197c68:
    // 0x197c68: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197c6c: 0x8c221914  lw          $v0, 0x1914($at)
    ctx->pc = 0x197c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197c74: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197c78: 0xac221914  sw          $v0, 0x1914($at)
    ctx->pc = 0x197c78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6420), GPR_U32(ctx, 2));
    // 0x197c7c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197c80: 0x8c241914  lw          $a0, 0x1914($at)
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197c84: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x197c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197c88: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x197C88u;
    {
        const bool branch_taken_0x197c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C88u;
            // 0x197c8c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c88) {
            ctx->pc = 0x197CB0u;
            goto label_197cb0;
        }
    }
    ctx->pc = 0x197C90u;
    // 0x197c90: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x197c94: 0x2463194b  addiu       $v1, $v1, 0x194B
    ctx->pc = 0x197c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6475));
    // 0x197c98: 0x2442194c  addiu       $v0, $v0, 0x194C
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6476));
    // 0x197c9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197ca0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197ca4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x197ca4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ca8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197CA8u;
    {
        const bool branch_taken_0x197ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CA8u;
            // 0x197cac: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ca8) {
            ctx->pc = 0x197CC0u;
            goto label_197cc0;
        }
    }
    ctx->pc = 0x197CB0u;
label_197cb0:
    // 0x197cb0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x197cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x197cb4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197cb8: 0xa02218f1  sb          $v0, 0x18F1($at)
    ctx->pc = 0x197cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6385), (uint8_t)GPR_U32(ctx, 2));
    // 0x197cbc: 0x0  nop
    ctx->pc = 0x197cbcu;
    // NOP
label_197cc0:
    // 0x197cc0: 0xc05d110  jal         func_174440
    ctx->pc = 0x197CC0u;
    SET_GPR_U32(ctx, 31, 0x197CC8u);
    ctx->pc = 0x197CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197CC0u;
            // 0x197cc4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197CC8u; }
        if (ctx->pc != 0x197CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197CC8u; }
        if (ctx->pc != 0x197CC8u) { return; }
    }
    ctx->pc = 0x197CC8u;
    // 0x197cc8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x197CC8u;
    {
        const bool branch_taken_0x197cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197cc8) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197CD0u;
label_197cd0:
    // 0x197cd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197cd4: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x197cd8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x197CD8u;
    {
        const bool branch_taken_0x197cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CD8u;
            // 0x197cdc: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cd8) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197CE0u;
    // 0x197ce0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197ce4: 0x8c241914  lw          $a0, 0x1914($at)
    ctx->pc = 0x197ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197ce8: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197CE8u;
    {
        const bool branch_taken_0x197ce8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x197CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CE8u;
            // 0x197cec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ce8) {
            ctx->pc = 0x197D30u;
            goto label_197d30;
        }
    }
    ctx->pc = 0x197CF0u;
    // 0x197cf0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x197cf4: 0x2442194c  addiu       $v0, $v0, 0x194C
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6476));
    // 0x197cf8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197cfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197d00: 0xa02318f1  sb          $v1, 0x18F1($at)
    ctx->pc = 0x197d00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6385), (uint8_t)GPR_U32(ctx, 3));
    // 0x197d04: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x197d04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197d08: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d0c: 0x8c221914  lw          $v0, 0x1914($at)
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197d18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d1c: 0xc05d110  jal         func_174440
    ctx->pc = 0x197D1Cu;
    SET_GPR_U32(ctx, 31, 0x197D24u);
    ctx->pc = 0x197D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D1Cu;
            // 0x197d20: 0xac221914  sw          $v0, 0x1914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D24u; }
        if (ctx->pc != 0x197D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D24u; }
        if (ctx->pc != 0x197D24u) { return; }
    }
    ctx->pc = 0x197D24u;
    // 0x197d24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x197D24u;
    {
        const bool branch_taken_0x197d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197d24) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197D2Cu;
    // 0x197d2c: 0x0  nop
    ctx->pc = 0x197d2cu;
    // NOP
label_197d30:
    // 0x197d30: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x197D30u;
    {
        const bool branch_taken_0x197d30 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x197D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D30u;
            // 0x197d34: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d30) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197D38u;
    // 0x197d38: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x197d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x197d3c: 0x2442194c  addiu       $v0, $v0, 0x194C
    ctx->pc = 0x197d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6476));
    // 0x197d40: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x197d48: 0xa02318f1  sb          $v1, 0x18F1($at)
    ctx->pc = 0x197d48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6385), (uint8_t)GPR_U32(ctx, 3));
    // 0x197d4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x197d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x197d50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d54: 0x8c221914  lw          $v0, 0x1914($at)
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x197d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x197d60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d64: 0xc05d110  jal         func_174440
    ctx->pc = 0x197D64u;
    SET_GPR_U32(ctx, 31, 0x197D6Cu);
    ctx->pc = 0x197D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D64u;
            // 0x197d68: 0xac221914  sw          $v0, 0x1914($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D6Cu; }
        if (ctx->pc != 0x197D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D6Cu; }
        if (ctx->pc != 0x197D6Cu) { return; }
    }
    ctx->pc = 0x197D6Cu;
    // 0x197d6c: 0x0  nop
    ctx->pc = 0x197d6cu;
    // NOP
label_197d70:
    // 0x197d70: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d74: 0x8c221914  lw          $v0, 0x1914($at)
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6420)));
    // 0x197d78: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x197d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197d7c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x197D7Cu;
    {
        const bool branch_taken_0x197d7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D7Cu;
            // 0x197d80: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d7c) {
            ctx->pc = 0x197DA8u;
            goto label_197da8;
        }
    }
    ctx->pc = 0x197D84u;
    // 0x197d84: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x197d88: 0xa02018f1  sb          $zero, 0x18F1($at)
    ctx->pc = 0x197d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 6385), (uint8_t)GPR_U32(ctx, 0));
    // 0x197d8c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197d90: 0x8c241904  lw          $a0, 0x1904($at)
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6404)));
    // 0x197d94: 0xc066038  jal         func_1980E0
    ctx->pc = 0x197D94u;
    SET_GPR_U32(ctx, 31, 0x197D9Cu);
    ctx->pc = 0x197D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D94u;
            // 0x197d98: 0x24a51938  addiu       $a1, $a1, 0x1938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980E0u;
    if (runtime->hasFunction(0x1980E0u)) {
        auto targetFn = runtime->lookupFunction(0x1980E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D9Cu; }
        if (ctx->pc != 0x197D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RankingInsertName_0x1980e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D9Cu; }
        if (ctx->pc != 0x197D9Cu) { return; }
    }
    ctx->pc = 0x197D9Cu;
    // 0x197d9c: 0xc056f28  jal         func_15BCA0
    ctx->pc = 0x197D9Cu;
    SET_GPR_U32(ctx, 31, 0x197DA4u);
    ctx->pc = 0x197DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D9Cu;
            // 0x197da0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCA0u;
    if (runtime->hasFunction(0x15BCA0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DA4u; }
        if (ctx->pc != 0x197DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnsetNameEntry_0x15bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DA4u; }
        if (ctx->pc != 0x197DA4u) { return; }
    }
    ctx->pc = 0x197DA4u;
    // 0x197da4: 0x0  nop
    ctx->pc = 0x197da4u;
    // NOP
label_197da8:
    // 0x197da8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197dac: 0x802718f1  lb          $a3, 0x18F1($at)
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 6385)));
    // 0x197db0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197db4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x197db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x197db8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197dbc: 0x24a52890  addiu       $a1, $a1, 0x2890
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10384));
    // 0x197dc0: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197DC0u;
    SET_GPR_U32(ctx, 31, 0x197DC8u);
    ctx->pc = 0x197DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197DC0u;
            // 0x197dc4: 0x24c6194c  addiu       $a2, $a2, 0x194C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DC8u; }
        if (ctx->pc != 0x197DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DC8u; }
        if (ctx->pc != 0x197DC8u) { return; }
    }
    ctx->pc = 0x197DC8u;
    // 0x197dc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197dcc: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x197dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x197dd0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197dd4: 0xc060a44  jal         func_182910
    ctx->pc = 0x197DD4u;
    SET_GPR_U32(ctx, 31, 0x197DDCu);
    ctx->pc = 0x197DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197DD4u;
            // 0x197dd8: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DDCu; }
        if (ctx->pc != 0x197DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197DDCu; }
        if (ctx->pc != 0x197DDCu) { return; }
    }
    ctx->pc = 0x197DDCu;
    // 0x197ddc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197de0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x197de4: 0x8c261904  lw          $a2, 0x1904($at)
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6404)));
    // 0x197de8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197dec: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x197decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
    // 0x197df0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197df4: 0x24a52898  addiu       $a1, $a1, 0x2898
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10392));
    // 0x197df8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x197dfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x197e00: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197E00u;
    SET_GPR_U32(ctx, 31, 0x197E08u);
    ctx->pc = 0x197E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E00u;
            // 0x197e04: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E08u; }
        if (ctx->pc != 0x197E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E08u; }
        if (ctx->pc != 0x197E08u) { return; }
    }
    ctx->pc = 0x197E08u;
    // 0x197e08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197e0c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x197e10: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197e14: 0xc060a44  jal         func_182910
    ctx->pc = 0x197E14u;
    SET_GPR_U32(ctx, 31, 0x197E1Cu);
    ctx->pc = 0x197E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E14u;
            // 0x197e18: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E1Cu; }
        if (ctx->pc != 0x197E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E1Cu; }
        if (ctx->pc != 0x197E1Cu) { return; }
    }
    ctx->pc = 0x197E1Cu;
    // 0x197e1c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197e20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197e24: 0x8c2618fc  lw          $a2, 0x18FC($at)
    ctx->pc = 0x197e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6396)));
    // 0x197e28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197e2c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197E2Cu;
    SET_GPR_U32(ctx, 31, 0x197E34u);
    ctx->pc = 0x197E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E2Cu;
            // 0x197e30: 0x24a528a0  addiu       $a1, $a1, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E34u; }
        if (ctx->pc != 0x197E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E34u; }
        if (ctx->pc != 0x197E34u) { return; }
    }
    ctx->pc = 0x197E34u;
    // 0x197e34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x197e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197e38: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x197e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x197e3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197e40: 0xc060a44  jal         func_182910
    ctx->pc = 0x197E40u;
    SET_GPR_U32(ctx, 31, 0x197E48u);
    ctx->pc = 0x197E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E40u;
            // 0x197e44: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E48u; }
        if (ctx->pc != 0x197E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E48u; }
        if (ctx->pc != 0x197E48u) { return; }
    }
    ctx->pc = 0x197E48u;
    // 0x197e48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197e4c: 0x8c22190c  lw          $v0, 0x190C($at)
    ctx->pc = 0x197e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6412)));
    // 0x197e50: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197E50u;
    {
        const bool branch_taken_0x197e50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x197E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E50u;
            // 0x197e54: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e50) {
            ctx->pc = 0x197E60u;
            goto label_197e60;
        }
    }
    ctx->pc = 0x197E58u;
    // 0x197e58: 0xac20190c  sw          $zero, 0x190C($at)
    ctx->pc = 0x197e58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6412), GPR_U32(ctx, 0));
    // 0x197e5c: 0x0  nop
    ctx->pc = 0x197e5cu;
    // NOP
label_197e60:
    // 0x197e60: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197e64: 0x8c23190c  lw          $v1, 0x190C($at)
    ctx->pc = 0x197e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6412)));
    // 0x197e68: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x197e6c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x197e6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x197e70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x197e74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x197e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197e78: 0x24a528a8  addiu       $a1, $a1, 0x28A8
    ctx->pc = 0x197e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10408));
    // 0x197e7c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x197e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x197e80: 0x0  nop
    ctx->pc = 0x197e80u;
    // NOP
    // 0x197e84: 0x0  nop
    ctx->pc = 0x197e84u;
    // NOP
    // 0x197e88: 0x1010  mfhi        $v0
    ctx->pc = 0x197e88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x197e8c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x197e90: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x197e90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x197e94: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x197E94u;
    SET_GPR_U32(ctx, 31, 0x197E9Cu);
    ctx->pc = 0x197E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E94u;
            // 0x197e98: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E9Cu; }
        if (ctx->pc != 0x197E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E9Cu; }
        if (ctx->pc != 0x197E9Cu) { return; }
    }
    ctx->pc = 0x197E9Cu;
    // 0x197e9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x197e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197ea0: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x197ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x197ea4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x197ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197ea8: 0xc060a44  jal         func_182910
    ctx->pc = 0x197EA8u;
    SET_GPR_U32(ctx, 31, 0x197EB0u);
    ctx->pc = 0x197EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EA8u;
            // 0x197eac: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EB0u; }
        if (ctx->pc != 0x197EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EB0u; }
        if (ctx->pc != 0x197EB0u) { return; }
    }
    ctx->pc = 0x197EB0u;
    // 0x197eb0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197eb4: 0x8c23190c  lw          $v1, 0x190C($at)
    ctx->pc = 0x197eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6412)));
    // 0x197eb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x197ebc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197ec0: 0xac23190c  sw          $v1, 0x190C($at)
    ctx->pc = 0x197ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6412), GPR_U32(ctx, 3));
    // 0x197ec4: 0x0  nop
    ctx->pc = 0x197ec4u;
    // NOP
label_197ec8:
    // 0x197ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x197ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197ECCu;
            // 0x197ed0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197878u: goto label_197878;
            case 0x197888u: goto label_197888;
            case 0x1978D8u: goto label_1978d8;
            case 0x1978E8u: goto label_1978e8;
            case 0x197918u: goto label_197918;
            case 0x197960u: goto label_197960;
            case 0x197970u: goto label_197970;
            case 0x197980u: goto label_197980;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A58u: goto label_197a58;
            case 0x197B10u: goto label_197b10;
            case 0x197B78u: goto label_197b78;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BD8u: goto label_197bd8;
            case 0x197C28u: goto label_197c28;
            case 0x197C38u: goto label_197c38;
            case 0x197C68u: goto label_197c68;
            case 0x197CB0u: goto label_197cb0;
            case 0x197CC0u: goto label_197cc0;
            case 0x197CD0u: goto label_197cd0;
            case 0x197D30u: goto label_197d30;
            case 0x197D70u: goto label_197d70;
            case 0x197DA8u: goto label_197da8;
            case 0x197E60u: goto label_197e60;
            case 0x197EC8u: goto label_197ec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197ED4u;
}
