#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_write_end_code
// Address: 0x16f948 - 0x16fa54
void adxsje_write_end_code_0x16f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_write_end_code");


    ctx->pc = 0x16f948u;

label_16f948:
    // 0x16f948: 0x27bdff90
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_16f94c:
    // 0x16f94c: 0xffbf0060
    ctx->pc = 0x16f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16f950:
    // 0x16f950: 0xffb40050
    ctx->pc = 0x16f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_16f954:
    // 0x16f954: 0xffb30040
    ctx->pc = 0x16f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_16f958:
    // 0x16f958: 0xffb20030
    ctx->pc = 0x16f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16f95c:
    // 0x16f95c: 0xffb10020
    ctx->pc = 0x16f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_16f960:
    // 0x16f960: 0xffb00010
    ctx->pc = 0x16f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16f964:
    // 0x16f964: 0x8c82006c
    ctx->pc = 0x16f964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_16f968:
    // 0x16f968: 0x8c93000c
    ctx->pc = 0x16f968u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16f96c:
    // 0x16f96c: 0x1c400003
label_16f970:
    if (ctx->pc == 0x16F970u) {
        ctx->pc = 0x16F970u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x16F974u;
        goto label_16f974;
    }
    ctx->pc = 0x16F96Cu;
    {
        const bool branch_taken_0x16f96c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x16F970u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x16f96c) {
            ctx->pc = 0x16F97Cu;
            goto label_16f97c;
        }
    }
    ctx->pc = 0x16F974u;
label_16f974:
    // 0x16f974: 0x1000000b
label_16f978:
    if (ctx->pc == 0x16F978u) {
        ctx->pc = 0x16F978u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x16F97Cu;
        goto label_16f97c;
    }
    ctx->pc = 0x16F974u;
    {
        const bool branch_taken_0x16f974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F978u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 80)));
        if (branch_taken_0x16f974) {
            ctx->pc = 0x16F9A4u;
            goto label_16f9a4;
        }
    }
    ctx->pc = 0x16F97Cu;
label_16f97c:
    // 0x16f97c: 0x8c820050
    ctx->pc = 0x16f97cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_16f980:
    // 0x16f980: 0x2403ffff
    ctx->pc = 0x16f980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f984:
    // 0x16f984: 0xa21021
    ctx->pc = 0x16f984u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_16f988:
    // 0x16f988: 0x244407ff
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
label_16f98c:
    // 0x16f98c: 0x24420ffe
    ctx->pc = 0x16f98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
label_16f990:
    // 0x16f990: 0x64182a
    ctx->pc = 0x16f990u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_16f994:
    // 0x16f994: 0x83100b
    ctx->pc = 0x16f994u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_16f998:
    // 0x16f998: 0x212c3
    ctx->pc = 0x16f998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_16f99c:
    // 0x16f99c: 0x212c0
    ctx->pc = 0x16f99cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
label_16f9a0:
    // 0x16f9a0: 0x45a023
    ctx->pc = 0x16f9a0u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_16f9a4:
    // 0x16f9a4: 0x8e630000
    ctx->pc = 0x16f9a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f9a8:
    // 0x16f9a8: 0x260202d
    ctx->pc = 0x16f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f9ac:
    // 0x16f9ac: 0x282d
    ctx->pc = 0x16f9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f9b0:
    // 0x16f9b0: 0x8c620024
    ctx->pc = 0x16f9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16f9b4:
    // 0x16f9b4: 0x40f809
label_16f9b8:
    if (ctx->pc == 0x16F9B8u) {
        ctx->pc = 0x16F9B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->pc = 0x16F9BCu;
        goto label_16f9bc;
    }
    ctx->pc = 0x16F9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F9BCu);
        ctx->pc = 0x16F9B8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F948u: goto label_16f948;
            case 0x16F94Cu: goto label_16f94c;
            case 0x16F950u: goto label_16f950;
            case 0x16F954u: goto label_16f954;
            case 0x16F958u: goto label_16f958;
            case 0x16F95Cu: goto label_16f95c;
            case 0x16F960u: goto label_16f960;
            case 0x16F964u: goto label_16f964;
            case 0x16F968u: goto label_16f968;
            case 0x16F96Cu: goto label_16f96c;
            case 0x16F970u: goto label_16f970;
            case 0x16F974u: goto label_16f974;
            case 0x16F978u: goto label_16f978;
            case 0x16F97Cu: goto label_16f97c;
            case 0x16F980u: goto label_16f980;
            case 0x16F984u: goto label_16f984;
            case 0x16F988u: goto label_16f988;
            case 0x16F98Cu: goto label_16f98c;
            case 0x16F990u: goto label_16f990;
            case 0x16F994u: goto label_16f994;
            case 0x16F998u: goto label_16f998;
            case 0x16F99Cu: goto label_16f99c;
            case 0x16F9A0u: goto label_16f9a0;
            case 0x16F9A4u: goto label_16f9a4;
            case 0x16F9A8u: goto label_16f9a8;
            case 0x16F9ACu: goto label_16f9ac;
            case 0x16F9B0u: goto label_16f9b0;
            case 0x16F9B4u: goto label_16f9b4;
            case 0x16F9B8u: goto label_16f9b8;
            case 0x16F9BCu: goto label_16f9bc;
            case 0x16F9C0u: goto label_16f9c0;
            case 0x16F9C4u: goto label_16f9c4;
            case 0x16F9C8u: goto label_16f9c8;
            case 0x16F9CCu: goto label_16f9cc;
            case 0x16F9D0u: goto label_16f9d0;
            case 0x16F9D4u: goto label_16f9d4;
            case 0x16F9D8u: goto label_16f9d8;
            case 0x16F9DCu: goto label_16f9dc;
            case 0x16F9E0u: goto label_16f9e0;
            case 0x16F9E4u: goto label_16f9e4;
            case 0x16F9E8u: goto label_16f9e8;
            case 0x16F9ECu: goto label_16f9ec;
            case 0x16F9F0u: goto label_16f9f0;
            case 0x16F9F4u: goto label_16f9f4;
            case 0x16F9F8u: goto label_16f9f8;
            case 0x16F9FCu: goto label_16f9fc;
            case 0x16FA00u: goto label_16fa00;
            case 0x16FA04u: goto label_16fa04;
            case 0x16FA08u: goto label_16fa08;
            case 0x16FA0Cu: goto label_16fa0c;
            case 0x16FA10u: goto label_16fa10;
            case 0x16FA14u: goto label_16fa14;
            case 0x16FA18u: goto label_16fa18;
            case 0x16FA1Cu: goto label_16fa1c;
            case 0x16FA20u: goto label_16fa20;
            case 0x16FA24u: goto label_16fa24;
            case 0x16FA28u: goto label_16fa28;
            case 0x16FA2Cu: goto label_16fa2c;
            case 0x16FA30u: goto label_16fa30;
            case 0x16FA34u: goto label_16fa34;
            case 0x16FA38u: goto label_16fa38;
            case 0x16FA3Cu: goto label_16fa3c;
            case 0x16FA40u: goto label_16fa40;
            case 0x16FA44u: goto label_16fa44;
            case 0x16FA48u: goto label_16fa48;
            case 0x16FA4Cu: goto label_16fa4c;
            case 0x16FA50u: goto label_16fa50;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F9BCu; }
            if (ctx->pc != 0x16F9BCu) { return; }
        }
    }
    ctx->pc = 0x16F9BCu;
label_16f9bc:
    // 0x16f9bc: 0x54102a
    ctx->pc = 0x16f9bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
label_16f9c0:
    // 0x16f9c0: 0x1440001c
label_16f9c4:
    if (ctx->pc == 0x16F9C4u) {
        ctx->pc = 0x16F9C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F9C8u;
        goto label_16f9c8;
    }
    ctx->pc = 0x16F9C0u;
    {
        const bool branch_taken_0x16f9c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F9C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f9c0) {
            ctx->pc = 0x16FA34u;
            goto label_16fa34;
        }
    }
    ctx->pc = 0x16F9C8u;
label_16f9c8:
    // 0x16f9c8: 0x24028001
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294934529));
label_16f9cc:
    // 0x16f9cc: 0x3a0202d
    ctx->pc = 0x16f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f9d0:
    // 0x16f9d0: 0xa7a20000
    ctx->pc = 0x16f9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
label_16f9d4:
    // 0x16f9d4: 0x24050002
    ctx->pc = 0x16f9d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_16f9d8:
    // 0x16f9d8: 0x24060001
    ctx->pc = 0x16f9d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_16f9dc:
    // 0x16f9dc: 0xc05ba70
label_16f9e0:
    if (ctx->pc == 0x16F9E0u) {
        ctx->pc = 0x16F9E0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F9E4u;
        goto label_16f9e4;
    }
    ctx->pc = 0x16F9DCu;
    SET_GPR_U32(ctx, 31, 0x16F9E4u);
    ctx->pc = 0x16F9E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9E4u; }
        else if (ctx->pc != 0x16F9E4u) { ctx->pc = 0x16F9E4u; }
    }
    if (ctx->pc != 0x16F9E4u) { return; }
    ctx->pc = 0x16F9E4u;
label_16f9e4:
    // 0x16f9e4: 0x882d
    ctx->pc = 0x16f9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f9e8:
    // 0x16f9e8: 0xa7b20000
    ctx->pc = 0x16f9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 18));
label_16f9ec:
    // 0x16f9ec: 0x3a0202d
    ctx->pc = 0x16f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f9f0:
    // 0x16f9f0: 0x24050002
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_16f9f4:
    // 0x16f9f4: 0x24060001
    ctx->pc = 0x16f9f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_16f9f8:
    // 0x16f9f8: 0xc05ba70
label_16f9fc:
    if (ctx->pc == 0x16F9FCu) {
        ctx->pc = 0x16F9FCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA00u;
        goto label_16fa00;
    }
    ctx->pc = 0x16F9F8u;
    SET_GPR_U32(ctx, 31, 0x16FA00u);
    ctx->pc = 0x16F9FCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA00u; }
        else if (ctx->pc != 0x16FA00u) { ctx->pc = 0x16FA00u; }
    }
    if (ctx->pc != 0x16FA00u) { return; }
    ctx->pc = 0x16FA00u;
label_16fa00:
    // 0x16fa00: 0x1a40000b
label_16fa04:
    if (ctx->pc == 0x16FA04u) {
        ctx->pc = 0x16FA04u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16FA08u;
        goto label_16fa08;
    }
    ctx->pc = 0x16FA00u;
    {
        const bool branch_taken_0x16fa00 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x16FA04u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x16fa00) {
            ctx->pc = 0x16FA30u;
            goto label_16fa30;
        }
    }
    ctx->pc = 0x16FA08u;
label_16fa08:
    // 0x16fa08: 0x27b00002
    ctx->pc = 0x16fa08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 2));
label_16fa0c:
    // 0x16fa0c: 0x200202d
    ctx->pc = 0x16fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16fa10:
    // 0x16fa10: 0x24050001
    ctx->pc = 0x16fa10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16fa14:
    // 0x16fa14: 0x24060001
    ctx->pc = 0x16fa14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_16fa18:
    // 0x16fa18: 0xc05ba70
label_16fa1c:
    if (ctx->pc == 0x16FA1Cu) {
        ctx->pc = 0x16FA1Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA20u;
        goto label_16fa20;
    }
    ctx->pc = 0x16FA18u;
    SET_GPR_U32(ctx, 31, 0x16FA20u);
    ctx->pc = 0x16FA1Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_write68_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA20u; }
        else if (ctx->pc != 0x16FA20u) { ctx->pc = 0x16FA20u; }
    }
    if (ctx->pc != 0x16FA20u) { return; }
    ctx->pc = 0x16FA20u;
label_16fa20:
    // 0x16fa20: 0x26310001
    ctx->pc = 0x16fa20u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_16fa24:
    // 0x16fa24: 0x232102a
    ctx->pc = 0x16fa24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_16fa28:
    // 0x16fa28: 0x1440fff9
label_16fa2c:
    if (ctx->pc == 0x16FA2Cu) {
        ctx->pc = 0x16FA2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FA30u;
        goto label_16fa30;
    }
    ctx->pc = 0x16FA28u;
    {
        const bool branch_taken_0x16fa28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16FA2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16fa28) {
            ctx->pc = 0x16FA10u;
            goto label_16fa10;
        }
    }
    ctx->pc = 0x16FA30u;
label_16fa30:
    // 0x16fa30: 0x280102d
    ctx->pc = 0x16fa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16fa34:
    // 0x16fa34: 0xdfbf0060
    ctx->pc = 0x16fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16fa38:
    // 0x16fa38: 0xdfb40050
    ctx->pc = 0x16fa38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa3c:
    // 0x16fa3c: 0xdfb30040
    ctx->pc = 0x16fa3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16fa40:
    // 0x16fa40: 0xdfb20030
    ctx->pc = 0x16fa40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16fa44:
    // 0x16fa44: 0xdfb10020
    ctx->pc = 0x16fa44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16fa48:
    // 0x16fa48: 0xdfb00010
    ctx->pc = 0x16fa48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16fa4c:
    // 0x16fa4c: 0x3e00008
label_16fa50:
    if (ctx->pc == 0x16FA50u) {
        ctx->pc = 0x16FA50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16FA54u;
        goto label_fallthrough_0x16fa4c;
    }
    ctx->pc = 0x16FA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F948u: goto label_16f948;
            case 0x16F94Cu: goto label_16f94c;
            case 0x16F950u: goto label_16f950;
            case 0x16F954u: goto label_16f954;
            case 0x16F958u: goto label_16f958;
            case 0x16F95Cu: goto label_16f95c;
            case 0x16F960u: goto label_16f960;
            case 0x16F964u: goto label_16f964;
            case 0x16F968u: goto label_16f968;
            case 0x16F96Cu: goto label_16f96c;
            case 0x16F970u: goto label_16f970;
            case 0x16F974u: goto label_16f974;
            case 0x16F978u: goto label_16f978;
            case 0x16F97Cu: goto label_16f97c;
            case 0x16F980u: goto label_16f980;
            case 0x16F984u: goto label_16f984;
            case 0x16F988u: goto label_16f988;
            case 0x16F98Cu: goto label_16f98c;
            case 0x16F990u: goto label_16f990;
            case 0x16F994u: goto label_16f994;
            case 0x16F998u: goto label_16f998;
            case 0x16F99Cu: goto label_16f99c;
            case 0x16F9A0u: goto label_16f9a0;
            case 0x16F9A4u: goto label_16f9a4;
            case 0x16F9A8u: goto label_16f9a8;
            case 0x16F9ACu: goto label_16f9ac;
            case 0x16F9B0u: goto label_16f9b0;
            case 0x16F9B4u: goto label_16f9b4;
            case 0x16F9B8u: goto label_16f9b8;
            case 0x16F9BCu: goto label_16f9bc;
            case 0x16F9C0u: goto label_16f9c0;
            case 0x16F9C4u: goto label_16f9c4;
            case 0x16F9C8u: goto label_16f9c8;
            case 0x16F9CCu: goto label_16f9cc;
            case 0x16F9D0u: goto label_16f9d0;
            case 0x16F9D4u: goto label_16f9d4;
            case 0x16F9D8u: goto label_16f9d8;
            case 0x16F9DCu: goto label_16f9dc;
            case 0x16F9E0u: goto label_16f9e0;
            case 0x16F9E4u: goto label_16f9e4;
            case 0x16F9E8u: goto label_16f9e8;
            case 0x16F9ECu: goto label_16f9ec;
            case 0x16F9F0u: goto label_16f9f0;
            case 0x16F9F4u: goto label_16f9f4;
            case 0x16F9F8u: goto label_16f9f8;
            case 0x16F9FCu: goto label_16f9fc;
            case 0x16FA00u: goto label_16fa00;
            case 0x16FA04u: goto label_16fa04;
            case 0x16FA08u: goto label_16fa08;
            case 0x16FA0Cu: goto label_16fa0c;
            case 0x16FA10u: goto label_16fa10;
            case 0x16FA14u: goto label_16fa14;
            case 0x16FA18u: goto label_16fa18;
            case 0x16FA1Cu: goto label_16fa1c;
            case 0x16FA20u: goto label_16fa20;
            case 0x16FA24u: goto label_16fa24;
            case 0x16FA28u: goto label_16fa28;
            case 0x16FA2Cu: goto label_16fa2c;
            case 0x16FA30u: goto label_16fa30;
            case 0x16FA34u: goto label_16fa34;
            case 0x16FA38u: goto label_16fa38;
            case 0x16FA3Cu: goto label_16fa3c;
            case 0x16FA40u: goto label_16fa40;
            case 0x16FA44u: goto label_16fa44;
            case 0x16FA48u: goto label_16fa48;
            case 0x16FA4Cu: goto label_16fa4c;
            case 0x16FA50u: goto label_16fa50;
            default: break;
        }
        return;
    }
label_fallthrough_0x16fa4c:
    ctx->pc = 0x16FA54u;
}
