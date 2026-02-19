#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ModifyExp
// Address: 0x234880 - 0x2349a4
void ModifyExp_0x234880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234880u;

    // 0x234880: 0x27bdffd0
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234884: 0xffbf0020
    ctx->pc = 0x234884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234888: 0xffb10010
    ctx->pc = 0x234888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23488c: 0xffb00000
    ctx->pc = 0x23488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234890: 0x80802d
    ctx->pc = 0x234890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234894: 0x882d
    ctx->pc = 0x234894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234898: 0x8e021a1c
    ctx->pc = 0x234898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x23489c: 0xa21021
    ctx->pc = 0x23489cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2348a0: 0x4410002
    ctx->pc = 0x2348A0u;
    {
        const bool branch_taken_0x2348a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2348A4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 2));
        if (branch_taken_0x2348a0) {
            ctx->pc = 0x2348ACu;
            goto label_2348ac;
        }
    }
    ctx->pc = 0x2348A8u;
    // 0x2348a8: 0xae001a1c
    ctx->pc = 0x2348a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 0));
label_2348ac:
    // 0x2348ac: 0x18a00022
    ctx->pc = 0x2348ACu;
    {
        const bool branch_taken_0x2348ac = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2348ac) {
            ctx->pc = 0x234938u;
            goto label_234938;
        }
    }
    ctx->pc = 0x2348B4u;
    // 0x2348b4: 0x8e042ac0
    ctx->pc = 0x2348b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x2348b8: 0xc08d1fc
    ctx->pc = 0x2348B8u;
    SET_GPR_U32(ctx, 31, 0x2348C0u);
    ctx->pc = 0x2348BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2348C0u; }
    }
    if (ctx->pc != 0x2348C0u) { return; }
    ctx->pc = 0x2348C0u;
    // 0x2348c0: 0x8e031a1c
    ctx->pc = 0x2348c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x2348c4: 0x62182a
    ctx->pc = 0x2348c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2348c8: 0x14600031
    ctx->pc = 0x2348C8u;
    {
        const bool branch_taken_0x2348c8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2348CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2348c8) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x2348D0u;
    // 0x2348d0: 0x8e022ac0
    ctx->pc = 0x2348d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x2348d4: 0x40182d
    ctx->pc = 0x2348d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348d8: 0x28420063
    ctx->pc = 0x2348d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 99));
    // 0x2348dc: 0x1040002c
    ctx->pc = 0x2348DCu;
    {
        const bool branch_taken_0x2348dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2348E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2348dc) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x2348E4u;
    // 0x2348e4: 0x24110001
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2348e8: 0x24620001
    ctx->pc = 0x2348e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2348ec: 0x0
    ctx->pc = 0x2348ecu;
    // NOP
label_2348f0:
    // 0x2348f0: 0xae022ac0
    ctx->pc = 0x2348f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 2));
    // 0x2348f4: 0x200202d
    ctx->pc = 0x2348f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348f8: 0x8e05000c
    ctx->pc = 0x2348f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2348fc: 0xc08af08
    ctx->pc = 0x2348FCu;
    SET_GPR_U32(ctx, 31, 0x234904u);
    ctx->pc = 0x234900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234904u; }
    }
    if (ctx->pc != 0x234904u) { return; }
    ctx->pc = 0x234904u;
    // 0x234904: 0x8e042ac0
    ctx->pc = 0x234904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x234908: 0xc08d1fc
    ctx->pc = 0x234908u;
    SET_GPR_U32(ctx, 31, 0x234910u);
    ctx->pc = 0x23490Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234910u; }
    }
    if (ctx->pc != 0x234910u) { return; }
    ctx->pc = 0x234910u;
    // 0x234910: 0x8e031a1c
    ctx->pc = 0x234910u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x234914: 0x62182a
    ctx->pc = 0x234914u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x234918: 0x1460001d
    ctx->pc = 0x234918u;
    {
        const bool branch_taken_0x234918 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x23491Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234918) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x234920u;
    // 0x234920: 0x8e032ac0
    ctx->pc = 0x234920u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x234924: 0x28620063
    ctx->pc = 0x234924u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 99));
    // 0x234928: 0x1440fff1
    ctx->pc = 0x234928u;
    {
        const bool branch_taken_0x234928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23492Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x234928) {
            ctx->pc = 0x2348F0u;
            goto label_2348f0;
        }
    }
    ctx->pc = 0x234930u;
    // 0x234930: 0x10000017
    ctx->pc = 0x234930u;
    {
        const bool branch_taken_0x234930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234934u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234930) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x234938u;
label_234938:
    // 0x234938: 0x4a10015
    ctx->pc = 0x234938u;
    {
        const bool branch_taken_0x234938 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x23493Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234938) {
            ctx->pc = 0x234990u;
            goto label_234990;
        }
    }
    ctx->pc = 0x234940u;
    // 0x234940: 0x1000000f
    ctx->pc = 0x234940u;
    {
        const bool branch_taken_0x234940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234944u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
        if (branch_taken_0x234940) {
            ctx->pc = 0x234980u;
            goto label_234980;
        }
    }
    ctx->pc = 0x234948u;
label_234948:
    // 0x234948: 0xc08d1fc
    ctx->pc = 0x234948u;
    SET_GPR_U32(ctx, 31, 0x234950u);
    ctx->pc = 0x23494Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234950u; }
    }
    if (ctx->pc != 0x234950u) { return; }
    ctx->pc = 0x234950u;
    // 0x234950: 0x8e031a1c
    ctx->pc = 0x234950u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6684)));
    // 0x234954: 0x62182a
    ctx->pc = 0x234954u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x234958: 0x1060000c
    ctx->pc = 0x234958u;
    {
        const bool branch_taken_0x234958 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23495Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234958) {
            ctx->pc = 0x23498Cu;
            goto label_23498c;
        }
    }
    ctx->pc = 0x234960u;
    // 0x234960: 0x8e022ac0
    ctx->pc = 0x234960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x234964: 0x2442ffff
    ctx->pc = 0x234964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234968: 0xae022ac0
    ctx->pc = 0x234968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 2));
    // 0x23496c: 0x2411ffff
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x234970: 0x8e05000c
    ctx->pc = 0x234970u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x234974: 0xc08af08
    ctx->pc = 0x234974u;
    SET_GPR_U32(ctx, 31, 0x23497Cu);
    ctx->pc = 0x234978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23497Cu; }
    }
    if (ctx->pc != 0x23497Cu) { return; }
    ctx->pc = 0x23497Cu;
    // 0x23497c: 0x8e022ac0
    ctx->pc = 0x23497cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
label_234980:
    // 0x234980: 0x28420002
    ctx->pc = 0x234980u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x234984: 0x1040fff0
    ctx->pc = 0x234984u;
    {
        const bool branch_taken_0x234984 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x234984) {
            ctx->pc = 0x234948u;
            goto label_234948;
        }
    }
    ctx->pc = 0x23498Cu;
label_23498c:
    // 0x23498c: 0x220102d
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234990:
    // 0x234990: 0xdfbf0020
    ctx->pc = 0x234990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234994: 0xdfb10010
    ctx->pc = 0x234994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234998: 0xdfb00000
    ctx->pc = 0x234998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23499c: 0x3e00008
    ctx->pc = 0x23499Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2349A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2348ACu: goto label_2348ac;
            case 0x2348F0u: goto label_2348f0;
            case 0x234938u: goto label_234938;
            case 0x234948u: goto label_234948;
            case 0x234980u: goto label_234980;
            case 0x23498Cu: goto label_23498c;
            case 0x234990u: goto label_234990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2349A4u;
}
