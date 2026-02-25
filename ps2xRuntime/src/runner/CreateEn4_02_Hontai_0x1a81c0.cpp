#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn4_02_Hontai
// Address: 0x1a81c0 - 0x1a82b8
void CreateEn4_02_Hontai_0x1a81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn4_02_Hontai_0x1a81c0");
#endif

    ctx->pc = 0x1a81c0u;

    // 0x1a81c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a81c4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a81c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a81c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a81cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a81ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a81d0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1A81D0u;
    SET_GPR_U32(ctx, 31, 0x1A81D8u);
    ctx->pc = 0x1A81D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81D0u;
            // 0x1a81d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81D8u; }
        if (ctx->pc != 0x1A81D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81D8u; }
        if (ctx->pc != 0x1A81D8u) { return; }
    }
    ctx->pc = 0x1A81D8u;
    // 0x1a81d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a81d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81dc: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1a81e0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1a81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1a81e4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1A81E4u;
    SET_GPR_U32(ctx, 31, 0x1A81ECu);
    ctx->pc = 0x1A81E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81E4u;
            // 0x1a81e8: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81ECu; }
        if (ctx->pc != 0x1A81ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81ECu; }
        if (ctx->pc != 0x1A81ECu) { return; }
    }
    ctx->pc = 0x1A81ECu;
    // 0x1a81ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1A81ECu;
    SET_GPR_U32(ctx, 31, 0x1A81F4u);
    ctx->pc = 0x1A81F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81ECu;
            // 0x1a81f0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81F4u; }
        if (ctx->pc != 0x1A81F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A81F4u; }
        if (ctx->pc != 0x1A81F4u) { return; }
    }
    ctx->pc = 0x1A81F4u;
    // 0x1a81f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a81fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a81fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8200: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x1A8200u;
    SET_GPR_U32(ctx, 31, 0x1A8208u);
    ctx->pc = 0x1A8204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8200u;
            // 0x1a8204: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8208u; }
        if (ctx->pc != 0x1A8208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8208u; }
        if (ctx->pc != 0x1A8208u) { return; }
    }
    ctx->pc = 0x1A8208u;
    // 0x1a8208: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x1A8208u;
    SET_GPR_U32(ctx, 31, 0x1A8210u);
    ctx->pc = 0x1A820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8208u;
            // 0x1a820c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8210u; }
        if (ctx->pc != 0x1A8210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8210u; }
        if (ctx->pc != 0x1A8210u) { return; }
    }
    ctx->pc = 0x1A8210u;
    // 0x1a8210: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a8210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a8214: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a8218: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x1A8218u;
    SET_GPR_U32(ctx, 31, 0x1A8220u);
    ctx->pc = 0x1A821Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8218u;
            // 0x1a821c: 0xac221ae8  sw          $v0, 0x1AE8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8220u; }
        if (ctx->pc != 0x1A8220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8220u; }
        if (ctx->pc != 0x1A8220u) { return; }
    }
    ctx->pc = 0x1A8220u;
    // 0x1a8220: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a8220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a8224: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a8224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8228: 0xac221aec  sw          $v0, 0x1AEC($at)
    ctx->pc = 0x1a8228u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6892), GPR_U32(ctx, 2));
    // 0x1a822c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8230: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a8230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a8234: 0x8c271ae8  lw          $a3, 0x1AE8($at)
    ctx->pc = 0x1a8234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6888)));
    // 0x1a8238: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1a8238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1a823c: 0x8c281aec  lw          $t0, 0x1AEC($at)
    ctx->pc = 0x1a823cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6892)));
    // 0x1a8240: 0xc060614  jal         func_181850
    ctx->pc = 0x1A8240u;
    SET_GPR_U32(ctx, 31, 0x1A8248u);
    ctx->pc = 0x1A8244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8240u;
            // 0x1a8244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8248u; }
        if (ctx->pc != 0x1A8248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8248u; }
        if (ctx->pc != 0x1A8248u) { return; }
    }
    ctx->pc = 0x1A8248u;
    // 0x1a8248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a824c: 0xc06060c  jal         func_181830
    ctx->pc = 0x1A824Cu;
    SET_GPR_U32(ctx, 31, 0x1A8254u);
    ctx->pc = 0x1A8250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A824Cu;
            // 0x1a8250: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8254u; }
        if (ctx->pc != 0x1A8254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8254u; }
        if (ctx->pc != 0x1A8254u) { return; }
    }
    ctx->pc = 0x1A8254u;
    // 0x1a8254: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1a8254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1a8258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a825c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8260: 0xc060604  jal         func_181810
    ctx->pc = 0x1A8260u;
    SET_GPR_U32(ctx, 31, 0x1A8268u);
    ctx->pc = 0x1A8264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8260u;
            // 0x1a8264: 0x24c6a970  addiu       $a2, $a2, -0x5690 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8268u; }
        if (ctx->pc != 0x1A8268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8268u; }
        if (ctx->pc != 0x1A8268u) { return; }
    }
    ctx->pc = 0x1A8268u;
    // 0x1a8268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a826c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8270: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1A8270u;
    SET_GPR_U32(ctx, 31, 0x1A8278u);
    ctx->pc = 0x1A8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8270u;
            // 0x1a8274: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8278u; }
        if (ctx->pc != 0x1A8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8278u; }
        if (ctx->pc != 0x1A8278u) { return; }
    }
    ctx->pc = 0x1A8278u;
    // 0x1a8278: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x1a8278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1a827c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1A827Cu;
    SET_GPR_U32(ctx, 31, 0x1A8284u);
    ctx->pc = 0x1A8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A827Cu;
            // 0x1a8280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8284u; }
        if (ctx->pc != 0x1A8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8284u; }
        if (ctx->pc != 0x1A8284u) { return; }
    }
    ctx->pc = 0x1A8284u;
    // 0x1a8284: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1A8284u;
    SET_GPR_U32(ctx, 31, 0x1A828Cu);
    ctx->pc = 0x1A8288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8284u;
            // 0x1a8288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A828Cu; }
        if (ctx->pc != 0x1A828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A828Cu; }
        if (ctx->pc != 0x1A828Cu) { return; }
    }
    ctx->pc = 0x1A828Cu;
    // 0x1a828c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1a828cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a8290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8294: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a8294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a829c: 0xc07b368  jal         func_1ECDA0
    ctx->pc = 0x1A829Cu;
    SET_GPR_U32(ctx, 31, 0x1A82A4u);
    ctx->pc = 0x1A82A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A829Cu;
            // 0x1a82a0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECDA0u;
    if (runtime->hasFunction(0x1ECDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82A4u; }
        if (ctx->pc != 0x1A82A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipDefine_0x1ecda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82A4u; }
        if (ctx->pc != 0x1A82A4u) { return; }
    }
    ctx->pc = 0x1A82A4u;
    // 0x1a82a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a82a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a82a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a82a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a82ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a82acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a82b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A82B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A82B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82B0u;
            // 0x1a82b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A82B8u;
}
