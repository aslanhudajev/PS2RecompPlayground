#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage7Boss
// Address: 0x1b7180 - 0x1b7ca4
void CreateStage7Boss_0x1b7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage7Boss_0x1b7180");
#endif

    ctx->pc = 0x1b7180u;

    // 0x1b7180: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1b7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1b7184: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b7188: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b7188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b718c: 0x24637ce0  addiu       $v1, $v1, 0x7CE0
    ctx->pc = 0x1b718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31968));
    // 0x1b7190: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b7190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b7194: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x1b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7198: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b719c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1b719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1b71a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b71a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b71a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b71a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b71ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b71acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b71b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b71b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b71b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b71bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b71bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b71c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b71c4: 0x27b100a4  addiu       $s1, $sp, 0xA4
    ctx->pc = 0x1b71c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1b71c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b71cc: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1b71d0: 0x27a20194  addiu       $v0, $sp, 0x194
    ctx->pc = 0x1b71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b71d4: 0x2463a1c0  addiu       $v1, $v1, -0x5E40
    ctx->pc = 0x1b71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943168));
    // 0x1b71d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b71d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b71dc: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1b71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1b71e0: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x1b71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b71e4: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x1b71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x1b71e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b71ec: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b71f0: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b71f4: 0x24637cb0  addiu       $v1, $v1, 0x7CB0
    ctx->pc = 0x1b71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31920));
    // 0x1b71f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b71fc: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x1b71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7200: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7200u;
    SET_GPR_U32(ctx, 31, 0x1B7208u);
    ctx->pc = 0x1B7204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7200u;
            // 0x1b7204: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7208u; }
        if (ctx->pc != 0x1B7208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7208u; }
        if (ctx->pc != 0x1B7208u) { return; }
    }
    ctx->pc = 0x1B7208u;
    // 0x1b7208: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7208u;
    SET_GPR_U32(ctx, 31, 0x1B7210u);
    ctx->pc = 0x1B720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7208u;
            // 0x1b720c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7210u; }
        if (ctx->pc != 0x1B7210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7210u; }
        if (ctx->pc != 0x1B7210u) { return; }
    }
    ctx->pc = 0x1B7210u;
    // 0x1b7210: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7214: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7214u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7218: 0x27b000a8  addiu       $s0, $sp, 0xA8
    ctx->pc = 0x1b7218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1b721c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1b721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1b7220: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7224: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x1b7224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1b7228: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7228u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b722c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b722cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7230: 0x0  nop
    ctx->pc = 0x1b7230u;
    // NOP
    // 0x1b7234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7238: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b723c: 0x27b70170  addiu       $s7, $sp, 0x170
    ctx->pc = 0x1b723cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1b7240: 0x3c0341bc  lui         $v1, 0x41BC
    ctx->pc = 0x1b7240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16828 << 16));
    // 0x1b7244: 0x27be0174  addiu       $fp, $sp, 0x174
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x1b7248: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b7248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b724c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7250: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b7250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b7254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7258: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b725c: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b7260: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7264: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1b7264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1b7268: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b7268u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b726c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b726cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b7270: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b7274: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7278: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b727c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b727cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7280: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b7284: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7288: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b728c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B728Cu;
    SET_GPR_U32(ctx, 31, 0x1B7294u);
    ctx->pc = 0x1B7290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B728Cu;
            // 0x1b7290: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7294u; }
        if (ctx->pc != 0x1B7294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7294u; }
        if (ctx->pc != 0x1B7294u) { return; }
    }
    ctx->pc = 0x1B7294u;
    // 0x1b7294: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7298: 0x24140008  addiu       $s4, $zero, 0x8
    ctx->pc = 0x1b7298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b729c: 0x0  nop
    ctx->pc = 0x1b729cu;
    // NOP
label_1b72a0:
    // 0x1b72a0: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b72a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b72a4: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b72a8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b72ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b72acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b72b0: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b72b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b72b4: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b72b8: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x1b72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x1b72bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b72c0: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b72c4: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b72c8: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b72cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b72d0: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b72d4: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b72d8: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b72dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b72e0: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b72e4: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1b72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1b72e8: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B72E8u;
    SET_GPR_U32(ctx, 31, 0x1B72F0u);
    ctx->pc = 0x1B72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72E8u;
            // 0x1b72ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72F0u; }
        if (ctx->pc != 0x1B72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72F0u; }
        if (ctx->pc != 0x1B72F0u) { return; }
    }
    ctx->pc = 0x1B72F0u;
    // 0x1b72f0: 0xc060544  jal         func_181510
    ctx->pc = 0x1B72F0u;
    SET_GPR_U32(ctx, 31, 0x1B72F8u);
    ctx->pc = 0x1B72F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72F0u;
            // 0x1b72f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72F8u; }
        if (ctx->pc != 0x1B72F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72F8u; }
        if (ctx->pc != 0x1B72F8u) { return; }
    }
    ctx->pc = 0x1B72F8u;
    // 0x1b72f8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b72f8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b72fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b72fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7300: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7304: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7308: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1b7308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b730c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1b7310: 0x3c05420c  lui         $a1, 0x420C
    ctx->pc = 0x1b7310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16908 << 16));
    // 0x1b7314: 0x3c0641bc  lui         $a2, 0x41BC
    ctx->pc = 0x1b7314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16828 << 16));
    // 0x1b7318: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b731c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7320: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7324: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7324u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7328: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1b7328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b732c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b7330: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b7334: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1b7334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1b7338: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1b7338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b733c: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1b733cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1b7340: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7340u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7344: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1b7344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7348: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1b7348u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b734c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b734cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7350: 0x0  nop
    ctx->pc = 0x1b7350u;
    // NOP
    // 0x1b7354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7358: 0xe4e40120  swc1        $f4, 0x120($a3)
    ctx->pc = 0x1b7358u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 288), bits); }
    // 0x1b735c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1b735cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7360: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7364: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b7364u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b7368: 0xe4430124  swc1        $f3, 0x124($v0)
    ctx->pc = 0x1b7368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b736c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7370: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7374: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b7374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b7378: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1b7378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1b737c: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x1b737cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x1b7380: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b7384: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1b7388: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b7388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b738c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b7390: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7394: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b7394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b7398: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b739c: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b73a0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B73A0u;
    SET_GPR_U32(ctx, 31, 0x1B73A8u);
    ctx->pc = 0x1B73A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73A0u;
            // 0x1b73a4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73A8u; }
        if (ctx->pc != 0x1B73A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B73A8u; }
        if (ctx->pc != 0x1B73A8u) { return; }
    }
    ctx->pc = 0x1B73A8u;
    // 0x1b73a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b73ac: 0xac540024  sw          $s4, 0x24($v0)
    ctx->pc = 0x1b73acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 20));
    // 0x1b73b0: 0x2aa30006  slti        $v1, $s5, 0x6
    ctx->pc = 0x1b73b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b73b4: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1B73B4u;
    {
        const bool branch_taken_0x1b73b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B73B4u;
            // 0x1b73b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73b4) {
            ctx->pc = 0x1B72A0u;
            goto label_1b72a0;
        }
    }
    ctx->pc = 0x1B73BCu;
    // 0x1b73bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b73bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b73c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b73c4: 0x0  nop
    ctx->pc = 0x1b73c4u;
    // NOP
label_1b73c8:
    // 0x1b73c8: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b73cc: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b73d0: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b73d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b73d8: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b73dc: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b73dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b73e0: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x1b73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x1b73e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b73e8: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b73ec: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b73f0: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b73f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b73f8: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b73fc: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b73fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7400: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b7400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b7404: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7408: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b740c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1b740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1b7410: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7410u;
    SET_GPR_U32(ctx, 31, 0x1B7418u);
    ctx->pc = 0x1B7414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7410u;
            // 0x1b7414: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7418u; }
        if (ctx->pc != 0x1B7418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7418u; }
        if (ctx->pc != 0x1B7418u) { return; }
    }
    ctx->pc = 0x1B7418u;
    // 0x1b7418: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7418u;
    SET_GPR_U32(ctx, 31, 0x1B7420u);
    ctx->pc = 0x1B741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7418u;
            // 0x1b741c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7420u; }
        if (ctx->pc != 0x1B7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7420u; }
        if (ctx->pc != 0x1B7420u) { return; }
    }
    ctx->pc = 0x1B7420u;
    // 0x1b7420: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7420u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7424: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7428: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b742c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7430: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1b7430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b7434: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1b7438: 0x3c05420c  lui         $a1, 0x420C
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16908 << 16));
    // 0x1b743c: 0x3c06c1bc  lui         $a2, 0xC1BC
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49596 << 16));
    // 0x1b7440: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7444: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7448: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b744c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b744cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7450: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1b7450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7454: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b7458: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b745c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1b745cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1b7460: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1b7460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b7464: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1b7464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1b7468: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7468u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b746c: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x1b746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7470: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1b7470u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7478: 0x0  nop
    ctx->pc = 0x1b7478u;
    // NOP
    // 0x1b747c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b747cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7480: 0xe4e40120  swc1        $f4, 0x120($a3)
    ctx->pc = 0x1b7480u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 288), bits); }
    // 0x1b7484: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7488: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1b7488u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b748c: 0x0  nop
    ctx->pc = 0x1b748cu;
    // NOP
    // 0x1b7490: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b7490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b7494: 0xe4430124  swc1        $f3, 0x124($v0)
    ctx->pc = 0x1b7494u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b7498: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b749c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b749cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b74a0: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1b74a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1b74a4: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x1b74a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x1b74a8: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b74ac: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b74acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1b74b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b74b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b74b4: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b74b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b74bc: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b74c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b74c4: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b74c8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B74C8u;
    SET_GPR_U32(ctx, 31, 0x1B74D0u);
    ctx->pc = 0x1B74CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74C8u;
            // 0x1b74cc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74D0u; }
        if (ctx->pc != 0x1B74D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B74D0u; }
        if (ctx->pc != 0x1B74D0u) { return; }
    }
    ctx->pc = 0x1B74D0u;
    // 0x1b74d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b74d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b74d4: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x1b74d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x1b74d8: 0x2a830007  slti        $v1, $s4, 0x7
    ctx->pc = 0x1b74d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b74dc: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1B74DCu;
    {
        const bool branch_taken_0x1b74dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B74E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B74DCu;
            // 0x1b74e0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74dc) {
            ctx->pc = 0x1B73C8u;
            goto label_1b73c8;
        }
    }
    ctx->pc = 0x1B74E4u;
    // 0x1b74e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b74e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b74e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74ec: 0x0  nop
    ctx->pc = 0x1b74ecu;
    // NOP
label_1b74f0:
    // 0x1b74f0: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b74f4: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b74f8: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b74fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7500: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7504: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7508: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x1b7508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x1b750c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b750cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7510: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7514: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b7514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7518: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b751c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b751cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7520: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b7524: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7528: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b7528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b752c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b752cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7530: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7534: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1b7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1b7538: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7538u;
    SET_GPR_U32(ctx, 31, 0x1B7540u);
    ctx->pc = 0x1B753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7538u;
            // 0x1b753c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7540u; }
        if (ctx->pc != 0x1B7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7540u; }
        if (ctx->pc != 0x1B7540u) { return; }
    }
    ctx->pc = 0x1B7540u;
    // 0x1b7540: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7540u;
    SET_GPR_U32(ctx, 31, 0x1B7548u);
    ctx->pc = 0x1B7544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7540u;
            // 0x1b7544: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7548u; }
        if (ctx->pc != 0x1B7548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7548u; }
        if (ctx->pc != 0x1B7548u) { return; }
    }
    ctx->pc = 0x1B7548u;
    // 0x1b7548: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b754c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b754cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7550: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1b7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1b7554: 0x3c034184  lui         $v1, 0x4184
    ctx->pc = 0x1b7554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16772 << 16));
    // 0x1b7558: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b755c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b755cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7560: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7564: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1b7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1b7568: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b756c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b756cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7570: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b7570u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1b7574: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7578: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b7578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b757c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b757cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7580: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7584: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b7584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b7588: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1b7588u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b758c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7590: 0x0  nop
    ctx->pc = 0x1b7590u;
    // NOP
    // 0x1b7594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7598: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b759c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b759cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b75a0: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1b75a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1b75a4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b75a8: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b75ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b75acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b75b0: 0x0  nop
    ctx->pc = 0x1b75b0u;
    // NOP
    // 0x1b75b4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b75b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b75b8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b75b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1b75bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b75c0: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b75c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b75c8: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b75cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b75d0: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b75d4: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B75D4u;
    SET_GPR_U32(ctx, 31, 0x1B75DCu);
    ctx->pc = 0x1B75D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75D4u;
            // 0x1b75d8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75DCu; }
        if (ctx->pc != 0x1B75DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B75DCu; }
        if (ctx->pc != 0x1B75DCu) { return; }
    }
    ctx->pc = 0x1B75DCu;
    // 0x1b75dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b75dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b75e0: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x1b75e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x1b75e4: 0x2a830007  slti        $v1, $s4, 0x7
    ctx->pc = 0x1b75e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b75e8: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1B75E8u;
    {
        const bool branch_taken_0x1b75e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B75ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B75E8u;
            // 0x1b75ec: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75e8) {
            ctx->pc = 0x1B74F0u;
            goto label_1b74f0;
        }
    }
    ctx->pc = 0x1B75F0u;
    // 0x1b75f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b75f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b75f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b75f8:
    // 0x1b75f8: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b75fc: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b7600: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b7600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7604: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7608: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b760c: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7610: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x1b7610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x1b7614: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7618: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b761c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7620: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b7624: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7628: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b762c: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7630: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b7634: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7638: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b763c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1b7640: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7640u;
    SET_GPR_U32(ctx, 31, 0x1B7648u);
    ctx->pc = 0x1B7644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7640u;
            // 0x1b7644: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7648u; }
        if (ctx->pc != 0x1B7648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7648u; }
        if (ctx->pc != 0x1B7648u) { return; }
    }
    ctx->pc = 0x1B7648u;
    // 0x1b7648: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7648u;
    SET_GPR_U32(ctx, 31, 0x1B7650u);
    ctx->pc = 0x1B764Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7648u;
            // 0x1b764c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7650u; }
        if (ctx->pc != 0x1B7650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7650u; }
        if (ctx->pc != 0x1B7650u) { return; }
    }
    ctx->pc = 0x1B7650u;
    // 0x1b7650: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7650u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7654: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7658: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b765c: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7660: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x1b7660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1b7664: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b7664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1b7668: 0x3c05c184  lui         $a1, 0xC184
    ctx->pc = 0x1b7668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49540 << 16));
    // 0x1b766c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7670: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7674: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7674u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7678: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1b7678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b767c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1b767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1b7680: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x1b7680u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x1b7684: 0x3c024184  lui         $v0, 0x4184
    ctx->pc = 0x1b7684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16772 << 16));
    // 0x1b7688: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1b768c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1b768cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1b7690: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1b7690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1b7694: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1b7694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1b7698: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7698u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b769c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1b769cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b76a0: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1b76a0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b76a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b76a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b76a8: 0x0  nop
    ctx->pc = 0x1b76a8u;
    // NOP
    // 0x1b76ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b76acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b76b0: 0xe4c40120  swc1        $f4, 0x120($a2)
    ctx->pc = 0x1b76b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
    // 0x1b76b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b76b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b76b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b76bc: 0x0  nop
    ctx->pc = 0x1b76bcu;
    // NOP
    // 0x1b76c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b76c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b76c4: 0xe4430124  swc1        $f3, 0x124($v0)
    ctx->pc = 0x1b76c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b76c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b76cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b76ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b76d0: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1b76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1b76d4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x1b76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x1b76d8: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b76dc: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b76dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1b76e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b76e4: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b76e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b76ec: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b76ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b76f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b76f4: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b76f8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B76F8u;
    SET_GPR_U32(ctx, 31, 0x1B7700u);
    ctx->pc = 0x1B76FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B76F8u;
            // 0x1b76fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7700u; }
        if (ctx->pc != 0x1B7700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7700u; }
        if (ctx->pc != 0x1B7700u) { return; }
    }
    ctx->pc = 0x1B7700u;
    // 0x1b7700: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b7700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b7704: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x1b7704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 21));
    // 0x1b7708: 0x2a830007  slti        $v1, $s4, 0x7
    ctx->pc = 0x1b7708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1b770c: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1B770Cu;
    {
        const bool branch_taken_0x1b770c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B770Cu;
            // 0x1b7710: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b770c) {
            ctx->pc = 0x1B75F8u;
            goto label_1b75f8;
        }
    }
    ctx->pc = 0x1B7714u;
    // 0x1b7714: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b7718: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b7718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b771c: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b7720: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b7720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7724: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7728: 0x24a591f0  addiu       $a1, $a1, -0x6E10
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939120));
    // 0x1b772c: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7730: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7734: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7738: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b773c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7740: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b7740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b7744: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7748: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x1b774c: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7750: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1b7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1b7754: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7758: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b775c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B775Cu;
    SET_GPR_U32(ctx, 31, 0x1B7764u);
    ctx->pc = 0x1B7760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B775Cu;
            // 0x1b7760: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7764u; }
        if (ctx->pc != 0x1B7764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7764u; }
        if (ctx->pc != 0x1B7764u) { return; }
    }
    ctx->pc = 0x1B7764u;
    // 0x1b7764: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7764u;
    SET_GPR_U32(ctx, 31, 0x1B776Cu);
    ctx->pc = 0x1B7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7764u;
            // 0x1b7768: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B776Cu; }
        if (ctx->pc != 0x1B776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B776Cu; }
        if (ctx->pc != 0x1B776Cu) { return; }
    }
    ctx->pc = 0x1B776Cu;
    // 0x1b776c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b776cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7770: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7774: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7778: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1b7778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1b777c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7780: 0x3c0341d8  lui         $v1, 0x41D8
    ctx->pc = 0x1b7780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16856 << 16));
    // 0x1b7784: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7784u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7788: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b778c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b778cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7790: 0x3c02c354  lui         $v0, 0xC354
    ctx->pc = 0x1b7790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50004 << 16));
    // 0x1b7794: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7798: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b7798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b779c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b779cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b77a0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b77a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b77a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b77a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b77a8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1b77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1b77ac: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b77acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b77b0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b77b4: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b77b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b77b8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b77b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b77bc: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b77c0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b77c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b77c4: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1b77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1b77c8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b77cc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b77ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b77d0: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b77d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b77d8: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b77dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b77e0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b77e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b77e8: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b77ec: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B77ECu;
    SET_GPR_U32(ctx, 31, 0x1B77F4u);
    ctx->pc = 0x1B77F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B77ECu;
            // 0x1b77f0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77F4u; }
        if (ctx->pc != 0x1B77F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B77F4u; }
        if (ctx->pc != 0x1B77F4u) { return; }
    }
    ctx->pc = 0x1B77F4u;
    // 0x1b77f4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b77f8: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1b77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1b77fc: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b7800: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7804: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7808: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b780c: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7810: 0x248491f0  addiu       $a0, $a0, -0x6E10
    ctx->pc = 0x1b7810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939120));
    // 0x1b7814: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7818: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b781c: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7820: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b7824: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7828: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b782c: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7830: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b7830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b7834: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7838: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b783c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1b783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1b7840: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7840u;
    SET_GPR_U32(ctx, 31, 0x1B7848u);
    ctx->pc = 0x1B7844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7840u;
            // 0x1b7844: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7848u; }
        if (ctx->pc != 0x1B7848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7848u; }
        if (ctx->pc != 0x1B7848u) { return; }
    }
    ctx->pc = 0x1B7848u;
    // 0x1b7848: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7848u;
    SET_GPR_U32(ctx, 31, 0x1B7850u);
    ctx->pc = 0x1B784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7848u;
            // 0x1b784c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7850u; }
        if (ctx->pc != 0x1B7850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7850u; }
        if (ctx->pc != 0x1B7850u) { return; }
    }
    ctx->pc = 0x1B7850u;
    // 0x1b7850: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7854: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7858: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b785c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1b785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1b7860: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7864: 0x3c03c1d8  lui         $v1, 0xC1D8
    ctx->pc = 0x1b7864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49624 << 16));
    // 0x1b7868: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7868u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b786c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7870: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7870u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7874: 0x3c02c354  lui         $v0, 0xC354
    ctx->pc = 0x1b7874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50004 << 16));
    // 0x1b7878: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7878u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b787c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b787cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7880: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b7884: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b7884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b7888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b788c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1b788cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1b7890: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7890u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7894: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7898: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b7898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b789c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b78a0: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b78a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b78a4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b78a8: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1b78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1b78ac: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b78acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b78b0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b78b4: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b78b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b78bc: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b78c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b78c4: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b78c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b78cc: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b78d0: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B78D0u;
    SET_GPR_U32(ctx, 31, 0x1B78D8u);
    ctx->pc = 0x1B78D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B78D0u;
            // 0x1b78d4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78D8u; }
        if (ctx->pc != 0x1B78D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B78D8u; }
        if (ctx->pc != 0x1B78D8u) { return; }
    }
    ctx->pc = 0x1B78D8u;
    // 0x1b78d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b78dc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b78dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b78e0: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x1b78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x1b78e4: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b78e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b78e8: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b78ec: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b78f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b78f4: 0x24a59ba0  addiu       $a1, $a1, -0x6460
    ctx->pc = 0x1b78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941600));
    // 0x1b78f8: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b78fc: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7900: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7904: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b7908: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b790c: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b790cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b7910: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7914: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x1b7914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x1b7918: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b7918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b791c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1b791cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1b7920: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7924: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7928: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7928u;
    SET_GPR_U32(ctx, 31, 0x1B7930u);
    ctx->pc = 0x1B792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7928u;
            // 0x1b792c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7930u; }
        if (ctx->pc != 0x1B7930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7930u; }
        if (ctx->pc != 0x1B7930u) { return; }
    }
    ctx->pc = 0x1B7930u;
    // 0x1b7930: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7930u;
    SET_GPR_U32(ctx, 31, 0x1B7938u);
    ctx->pc = 0x1B7934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7930u;
            // 0x1b7934: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7938u; }
        if (ctx->pc != 0x1B7938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7938u; }
        if (ctx->pc != 0x1B7938u) { return; }
    }
    ctx->pc = 0x1B7938u;
    // 0x1b7938: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b793c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7940: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7944: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1b7944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1b7948: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b794c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1b794cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1b7950: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7950u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7954: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7958: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7958u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b795c: 0x3c02c346  lui         $v0, 0xC346
    ctx->pc = 0x1b795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49990 << 16));
    // 0x1b7960: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7960u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7964: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b7964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7968: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b796c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b796cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b7970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7974: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1b7974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1b7978: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7978u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b797c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b797cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7980: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b7980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b7984: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7988: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b798c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b798cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7990: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1b7990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1b7994: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b7994u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b7998: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b7998u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b799c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b79a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b79a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b79a4: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b79a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b79ac: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b79b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b79b4: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b79b8: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B79B8u;
    SET_GPR_U32(ctx, 31, 0x1B79C0u);
    ctx->pc = 0x1B79BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B79B8u;
            // 0x1b79bc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79C0u; }
        if (ctx->pc != 0x1B79C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B79C0u; }
        if (ctx->pc != 0x1B79C0u) { return; }
    }
    ctx->pc = 0x1B79C0u;
    // 0x1b79c0: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b79c4: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1b79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1b79c8: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b79cc: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b79ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b79d0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b79d4: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b79d8: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b79dc: 0x24849ba0  addiu       $a0, $a0, -0x6460
    ctx->pc = 0x1b79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941600));
    // 0x1b79e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b79e4: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b79e8: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b79ec: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b79ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b79f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b79f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b79f4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b79f8: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b79f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b79fc: 0x24847cb0  addiu       $a0, $a0, 0x7CB0
    ctx->pc = 0x1b79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31920));
    // 0x1b7a00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7a04: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7a08: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1b7a0c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A14u);
    ctx->pc = 0x1B7A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A0Cu;
            // 0x1b7a10: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A14u; }
        if (ctx->pc != 0x1B7A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A14u; }
        if (ctx->pc != 0x1B7A14u) { return; }
    }
    ctx->pc = 0x1B7A14u;
    // 0x1b7a14: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7A14u;
    SET_GPR_U32(ctx, 31, 0x1B7A1Cu);
    ctx->pc = 0x1B7A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A14u;
            // 0x1b7a18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A1Cu; }
        if (ctx->pc != 0x1B7A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7A1Cu; }
        if (ctx->pc != 0x1B7A1Cu) { return; }
    }
    ctx->pc = 0x1B7A1Cu;
    // 0x1b7a1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7a20: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7a24: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7a28: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1b7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1b7a2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7a30: 0x3c03c170  lui         $v1, 0xC170
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49520 << 16));
    // 0x1b7a34: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7a34u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7a38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7a3c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7a3cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7a40: 0x3c02c346  lui         $v0, 0xC346
    ctx->pc = 0x1b7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49990 << 16));
    // 0x1b7a44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7a48: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b7a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7a4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b7a50: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b7a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b7a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7a58: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1b7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1b7a5c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7a60: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7a64: 0xe4a10120  swc1        $f1, 0x120($a1)
    ctx->pc = 0x1b7a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 288), bits); }
    // 0x1b7a68: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7a6c: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1b7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1b7a70: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7a74: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x1b7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
    // 0x1b7a78: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x1b7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x1b7a7c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1b7a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1b7a80: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b7a84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7a88: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b7a8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7a90: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b7a94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7a98: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b7a9c: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7AA4u);
    ctx->pc = 0x1B7AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A9Cu;
            // 0x1b7aa0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AA4u; }
        if (ctx->pc != 0x1B7AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7AA4u; }
        if (ctx->pc != 0x1B7AA4u) { return; }
    }
    ctx->pc = 0x1B7AA4u;
    // 0x1b7aa4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b7aa8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b7aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b7aac: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x1b7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x1b7ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7ab4: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b7ab8: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x1b7ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x1b7abc: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b7abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b7ac0: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7ac4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7ac8: 0x24a587b0  addiu       $a1, $a1, -0x7850
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936496));
    // 0x1b7acc: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7ad0: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7ad4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7ad8: 0x2484b830  addiu       $a0, $a0, -0x47D0
    ctx->pc = 0x1b7ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    // 0x1b7adc: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7ae0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b7ae4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7ae8: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x1b7ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x1b7aec: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7af0: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1b7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1b7af4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7af8: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7afc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7AFCu;
    SET_GPR_U32(ctx, 31, 0x1B7B04u);
    ctx->pc = 0x1B7B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7AFCu;
            // 0x1b7b00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B04u; }
        if (ctx->pc != 0x1B7B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B04u; }
        if (ctx->pc != 0x1B7B04u) { return; }
    }
    ctx->pc = 0x1B7B04u;
    // 0x1b7b04: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7B04u;
    SET_GPR_U32(ctx, 31, 0x1B7B0Cu);
    ctx->pc = 0x1B7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B04u;
            // 0x1b7b08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B0Cu; }
        if (ctx->pc != 0x1B7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B0Cu; }
        if (ctx->pc != 0x1B7B0Cu) { return; }
    }
    ctx->pc = 0x1B7B0Cu;
    // 0x1b7b0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1b7b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1b7b10: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7b14: 0xc4223520  lwc1        $f2, 0x3520($at)
    ctx->pc = 0x1b7b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7b18: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x1b7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x1b7b1c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b7b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7b20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7b24: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7b24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7b28: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7b28u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7b2c: 0x0  nop
    ctx->pc = 0x1b7b2cu;
    // NOP
    // 0x1b7b30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7b34: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1b7b34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b7b38: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1b7b3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b7b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b7b40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7b44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7b48: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7b48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7b4c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7b50: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1b7b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1b7b54: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7b58: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b7b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b7b5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7b60: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1b7b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1b7b64: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1b7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1b7b68: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b7b6c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1b7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x1b7b70: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7b74: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b7b78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7b7c: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b7b80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7b84: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b7b88: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B7B88u;
    SET_GPR_U32(ctx, 31, 0x1B7B90u);
    ctx->pc = 0x1B7B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B88u;
            // 0x1b7b8c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B90u; }
        if (ctx->pc != 0x1B7B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7B90u; }
        if (ctx->pc != 0x1B7B90u) { return; }
    }
    ctx->pc = 0x1B7B90u;
    // 0x1b7b90: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x1b7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1b7b94: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b7b98: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1b7b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1b7b9c: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b7ba0: 0x24847ce0  addiu       $a0, $a0, 0x7CE0
    ctx->pc = 0x1b7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31968));
    // 0x1b7ba4: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b7ba8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7bac: 0x24a5ac60  addiu       $a1, $a1, -0x53A0
    ctx->pc = 0x1b7bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945888));
    // 0x1b7bb0: 0x27a30194  addiu       $v1, $sp, 0x194
    ctx->pc = 0x1b7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b7bb4: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x1b7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x1b7bb8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7bbc: 0x2484b820  addiu       $a0, $a0, -0x47E0
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948896));
    // 0x1b7bc0: 0x27a30198  addiu       $v1, $sp, 0x198
    ctx->pc = 0x1b7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b7bc4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b7bc8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1b7bcc: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    // 0x1b7bd0: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x1b7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1b7bd4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b7bd8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1b7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1b7bdc: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x1b7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b7be0: 0xc060694  jal         func_181A50
    ctx->pc = 0x1B7BE0u;
    SET_GPR_U32(ctx, 31, 0x1B7BE8u);
    ctx->pc = 0x1B7BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BE0u;
            // 0x1b7be4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BE8u; }
        if (ctx->pc != 0x1B7BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BE8u; }
        if (ctx->pc != 0x1B7BE8u) { return; }
    }
    ctx->pc = 0x1B7BE8u;
    // 0x1b7be8: 0xc060544  jal         func_181510
    ctx->pc = 0x1B7BE8u;
    SET_GPR_U32(ctx, 31, 0x1B7BF0u);
    ctx->pc = 0x1B7BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BE8u;
            // 0x1b7bec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BF0u; }
        if (ctx->pc != 0x1B7BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BF0u; }
        if (ctx->pc != 0x1B7BF0u) { return; }
    }
    ctx->pc = 0x1B7BF0u;
    // 0x1b7bf0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1b7bf4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1b7bf4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7bfc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7c00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b7c04: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b7c04u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7c08: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x1b7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x1b7c0c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b7c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7c14: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7c18: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1b7c18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1b7c1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b7c20: 0xe4c10120  swc1        $f1, 0x120($a2)
    ctx->pc = 0x1b7c20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 288), bits); }
    // 0x1b7c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b7c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b7c28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7c2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1b7c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1b7c30: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7c34: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x1b7c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
    // 0x1b7c38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b7c3c: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x1b7c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
    // 0x1b7c40: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1b7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1b7c44: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1b7c48: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1b7c48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x1b7c4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7c50: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1b7c54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7c58: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x1b7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b7c5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b7c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b7c60: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x1b7c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x1b7c64: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1B7C64u;
    SET_GPR_U32(ctx, 31, 0x1B7C6Cu);
    ctx->pc = 0x1B7C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C64u;
            // 0x1b7c68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C6Cu; }
        if (ctx->pc != 0x1B7C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C6Cu; }
        if (ctx->pc != 0x1B7C6Cu) { return; }
    }
    ctx->pc = 0x1B7C6Cu;
    // 0x1b7c6c: 0xc06edec  jal         func_1BB7B0
    ctx->pc = 0x1B7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C74u);
    ctx->pc = 0x1BB7B0u;
    if (runtime->hasFunction(0x1BB7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C74u; }
        if (ctx->pc != 0x1B7C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stg7HakkyouFlgReset_0x1bb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C74u; }
        if (ctx->pc != 0x1B7C74u) { return; }
    }
    ctx->pc = 0x1B7C74u;
    // 0x1b7c74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b7c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b7c78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b7c78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7c7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b7c7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7c80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b7c80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7c84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b7c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7c88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7c88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b7c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C9Cu;
            // 0x1b7ca0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B72A0u: goto label_1b72a0;
            case 0x1B73C8u: goto label_1b73c8;
            case 0x1B74F0u: goto label_1b74f0;
            case 0x1B75F8u: goto label_1b75f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7CA4u;
}
